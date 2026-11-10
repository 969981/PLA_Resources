/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011357a0; name: FUN_011357a0
 */


void FUN_011357a0(long param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((int)param_2 < 0x3d5) {
    lVar3 = param_1 + (ulong)param_2 * 0x58;
    uVar2 = *(ushort *)(lVar3 + 0x124);
    if (uVar2 >> 5 < 0x753) {
      iVar1 = uVar2 + 1;
      *(short *)(lVar3 + 0x124) = (short)iVar1;
      local_28 = 0;
      local_20 = 0;
      uStack_18 = 0;
      FUN_0113442c(param_1,0x18,iVar1,&local_28);
    }
  }
  return;
}


