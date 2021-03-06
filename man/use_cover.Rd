% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/mapperRef.R
\name{use_cover}
\alias{use_cover}
\title{Selects one of the available covering methods to use.}
\arguments{
\item{cover}{Either a pre-configured cover, or name of the cover to use.}

\item{...}{Additional parameter values to pass to the covering generators initialize method.}
}
\description{
Convenience method to select, parameterize, and construct a cover and associate it with the calling objects \code{cover} field.
}
\details{
Every \code{\link{MapperRef}} object requires a \code{\link{CoverRef}} object as 
is \code{cover} member field. In the context of Mapper, a cover is used to discretize the filter 
space into a partition, which is then used via a \emph{pullback} operation to construct the vertices. \cr 
\cr 
The \code{\link{MapperRef}} class makes no restrictions on the cover that is used; only that it fulfills the 
requirements of being a valid \code{\link{CoverRef}} instance (e.g. a \code{\link{FixedIntervalCover}}), 
or one of the cover typenames listed in the \code{\link{covers_available}()}. 
If a typename is given, the cover is automatically constructed before being assigned to the \code{$cover} field.
}
\examples{
data(noisy_circle)
m <- MapperRef$new(noisy_circle)
m$use_filter(noisy_circle[,1])
m$use_cover("fixed interval", number_intervals = 5, percent_overlap = 25)

## Alternative way to specify (and construct) the cover
cover <- FixedIntervalCover$new(number_intervals = 5, percent_overlap = 25)
cover$construct_cover(filter = m$filter)
m$cover <- cover
}
