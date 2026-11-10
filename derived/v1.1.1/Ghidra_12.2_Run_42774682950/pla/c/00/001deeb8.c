/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001deeb8; name: FUN_001deeb8
 */


void FUN_001deeb8(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [128];
  undefined4 local_14;
  
  uVar3 = *param_1;
  local_14 = 1;
  iVar1 = nnsocketSetSockOpt(param_2,0xffff,0x800,&local_14,4);
  if (iVar1 < 0) {
    uVar2 = nnsocketGetLastErrno();
    uVar2 = FUN_001f8d80(uVar2,auStack_a0,0x80);
    FUN_001f3934(uVar3,"Could not set SO_NOSIGPIPE: %s\n",uVar2);
  }
  return;
}


