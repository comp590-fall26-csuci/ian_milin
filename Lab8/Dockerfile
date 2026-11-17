FROM docker.io/library/debian:trixie-slim

COPY 590MakefileLab/ ./590MakefileLab

COPY Makefile ./

RUN apt-get update && \
	apt-get install -y --no-install-recommends build-essential make && \
	rm -rf /var/lib/apt/lists/* && \
	make

CMD ["make", "run"]
