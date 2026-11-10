/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2d2d8; name: FUN_02c2d2d8
 */


ulong FUN_02c2d2d8(long param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x238) == 4) {
    puVar3 = (undefined8 *)FUN_00d1603c();
    *(undefined8 *)PTR_DAT_0437b198 = *puVar3;
    uVar5 = FUN_02c2d098(puVar3,param_2);
    return uVar5;
  }
  if (*(int *)(param_1 + 0x238) == 3) {
    puVar3 = (undefined8 *)FUN_00d1603c();
    uVar4 = *puVar3;
    *(undefined8 *)PTR_DAT_0437b198 = uVar4;
    uVar5 = FUN_02c2c6d0(uVar4,param_2);
    return uVar5;
  }
  puVar3 = (undefined8 *)FUN_00d1603c();
  *(undefined8 *)PTR_DAT_0437b198 = *puVar3;
  lVar1 = 2;
  if (9 < *param_2 - 0x11 && *param_2 != 0x1b) {
    lVar1 = 0;
  }
  uVar2 = *(ushort *)((long)param_2 + lVar1);
  if (uVar2 < 0x100) {
    uVar5 = (ulong)((*(uint *)(&DAT_038884e0 + (ulong)(uVar2 >> 5) * 4) & 1 << (ulong)(uVar2 & 0x1f)
                    ) != 0);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


