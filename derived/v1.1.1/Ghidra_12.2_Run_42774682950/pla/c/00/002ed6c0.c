/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ed6c0; name: FUN_002ed6c0
 */


long FUN_002ed6c0(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  puVar3 = PTR_DAT_04373820;
  if (param_1 >> 0x20 == 0) {
    lVar4 = FUN_002ed4a0(param_1 & 0xffffffff);
    return lVar4;
  }
  iVar7 = (int)(param_1 / 1000000000);
  if (param_1 < 0x3b9aca0000000000) {
    puVar5 = (undefined2 *)FUN_002ed4a0(param_1 / 1000000000 & 0xffffffff);
  }
  else {
    uVar1 = iVar7 + (int)(param_1 / 100000000000) * -100;
    puVar6 = (undefined2 *)FUN_002ed4a0();
    if (99 < uVar1) goto LAB_002ed854;
    puVar5 = puVar6 + 1;
    *puVar6 = *(undefined2 *)(puVar3 + (ulong)uVar1 * 2);
  }
  uVar1 = (int)param_1 + iVar7 * -1000000000;
  if (uVar1 < 1000000000) {
    uVar2 = uVar1 % 10000000;
    *puVar5 = *(undefined2 *)(puVar3 + ((ulong)uVar1 / 10000000) * 2);
    if (uVar2 < 10000000) {
      uVar1 = uVar2 + ((uVar2 >> 5) / 0xc35) * -100000;
      puVar5[1] = *(undefined2 *)(puVar3 + ((ulong)(uVar2 >> 5) / 0xc35) * 2);
      if (uVar1 < 100000) {
        uVar2 = uVar1 % 1000;
        puVar5[2] = *(undefined2 *)(puVar3 + (ulong)(uVar1 / 1000) * 2);
        if (uVar2 < 1000) {
          puVar5[3] = *(undefined2 *)(puVar3 + ((ulong)uVar2 / 10) * 2);
          puVar5[4] = *(undefined2 *)(&DAT_039f8e3d + (ulong)(uVar2 % 10) * 2);
          return (long)puVar5 + 9;
        }
      }
    }
  }
LAB_002ed854:
                    /* WARNING: Subroutine does not return */
  __assert_fail("i < 100","external/com_google_absl\\absl/strings/numbers.h",0x7b,"PutTwoDigits");
}


