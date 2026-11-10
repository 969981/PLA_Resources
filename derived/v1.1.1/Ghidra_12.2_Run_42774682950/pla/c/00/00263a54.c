/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00263a54; name: FUN_00263a54
 */


undefined8
FUN_00263a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  char acStack_98 [72];
  
  nn::util::SNPrintf(acStack_98,0x47,"%s_%d",param_7,(ulong)*(uint *)(param_6 + 4));
  uVar1 = *(ushort *)(param_6 + 10) - 1;
  if (uVar1 < 3) {
    uVar2 = *(undefined4 *)(&DAT_039d010c + (long)(short)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  FUN_00262ef4(param_1 + 0x20,param_2,param_3,param_5,param_4,param_8,0,0);
  FUN_00263734(param_1,param_3,param_5);
  return 1;
}


