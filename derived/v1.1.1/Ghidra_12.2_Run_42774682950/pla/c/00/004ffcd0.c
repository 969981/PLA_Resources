/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ffcd0; name: FUN_004ffcd0
 */


undefined8 FUN_004ffcd0(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_002e5050();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_002e4ce0(param_1,"grpc.max_receive_message_length",0xffffffff00400000,0x7fffffff);
    return uVar2;
  }
  return 0xffffffff;
}


