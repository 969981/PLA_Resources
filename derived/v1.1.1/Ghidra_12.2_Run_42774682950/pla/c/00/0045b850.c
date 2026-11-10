/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b850; name: FUN_0045b850
 */


undefined8 FUN_0045b850(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  
  uVar1 = param_3 + 7;
  uVar2 = param_3 + 0xe;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  puVar4 = (undefined4 *)FUN_00421c70(PTR_DAT_04374378);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar4 = 0;
  lVar5 = *(long *)(puVar4 + 2);
  if (lVar5 == 0) {
    lVar5 = FUN_0041cf50();
    *(long *)(puVar4 + 2) = lVar5;
    if (lVar5 == 0) goto LAB_0045b93c;
  }
  iVar3 = thunk_FUN_0040a280(lVar5,param_2,(int)uVar2 >> 3);
  if (iVar3 != 0) {
    param_3 = param_3 - (uVar1 & 0xfffffff8);
    *(ulong *)(*(long *)(puVar4 + 2) + 0x10) =
         *(ulong *)(*(long *)(puVar4 + 2) + 0x10) & 0xfffffffffffffff8;
    *(ulong *)(*(long *)(puVar4 + 2) + 0x10) = *(ulong *)(*(long *)(puVar4 + 2) + 0x10) | 8;
    if (0 < (int)param_3) {
      lVar5 = *(long *)(*(long *)(puVar4 + 2) + 8) + (long)((int)uVar2 >> 3);
      *(byte *)(lVar5 + -1) = *(byte *)(lVar5 + -1) & (byte)(-0x100 >> (param_3 & 0x1f));
      *(ulong *)(*(long *)(puVar4 + 2) + 0x10) =
           *(ulong *)(*(long *)(puVar4 + 2) + 0x10) | (long)(int)(8 - param_3);
    }
    *param_1 = puVar4;
    return 1;
  }
LAB_0045b93c:
  FUN_00421810(puVar4,PTR_DAT_04374378);
  return 0;
}


