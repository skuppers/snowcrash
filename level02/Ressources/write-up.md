# Level02

We a `.pcap` file, which stands for "packet capture". We copied that file locally and loaded it in wireshark. Where we followed the `tcp_stream`, which
allowed us to filter "the meta from the data". We then saw the data with "ft_wandr...NDRel.LOL". The dots were `0x7F`, which is the ascii code for `DEL` so
after correcting the user input, we found the password to log into flag02: `ft_waNDReL0L`.
