/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb258; name: FUN_031bb258
 */


void FUN_031bb258(long param_1,int *param_2)

{
  int iVar1;
  undefined8 local_40;
  undefined4 uStack_38;
  float fStack_34;
  undefined1 local_24 [4];
  
  FUN_031bb1e0(param_1,*param_2,(long)(char)param_2[1],&local_40,local_24);
  *(ulong *)(param_2 + 6) = CONCAT44(fStack_34,uStack_38);
  *(undefined8 *)(param_2 + 4) = local_40;
  *(ulong *)(param_2 + 10) = CONCAT44(fStack_34,uStack_38);
  *(undefined8 *)(param_2 + 8) = local_40;
  *(bool *)((long)param_2 + 6) = fStack_34 < 0.0;
  *(undefined1 *)(param_2 + 2) = local_24[0];
  iVar1 = *param_2;
  if (iVar1 < *(int *)(param_1 + 0x24)) {
    if ((-1 < iVar1) &&
       ((*(byte *)(*(long *)(param_1 + 0x40) + (long)iVar1 * 0x80 + 0x10) >> 4 & 1) != 0)) {
      *(undefined1 *)((long)param_2 + 7) = 1;
    }
  }
  else {
    *(undefined1 *)(param_2 + 1) = 0xff;
  }
  return;
}


