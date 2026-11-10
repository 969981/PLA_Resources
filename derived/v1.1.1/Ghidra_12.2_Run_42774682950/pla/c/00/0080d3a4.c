/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080d3a4; name: FUN_0080d3a4
 */


void FUN_0080d3a4(long param_1)

{
  FUN_007fad58();
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1260));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x126c));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1278));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1284));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x1290));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x129c));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x12a8));
  nn::socket::InetHtonl(*(uint *)(param_1 + 0x12b4));
  return;
}


