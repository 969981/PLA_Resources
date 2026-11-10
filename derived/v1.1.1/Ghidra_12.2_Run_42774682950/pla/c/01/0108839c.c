/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108839c; name: FUN_0108839c
 */


void FUN_0108839c(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(char *)(param_2 + 0xa0) == '\0') {
    lVar7 = *(long *)(param_2 + 0x68);
    uVar8 = *(long *)(param_2 + 0x70) - lVar7 >> 5;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x68);
    lVar5 = *(long *)(param_2 + 0x70) - lVar7;
    uVar8 = lVar5 >> 5;
    if ((lVar5 != 0) && (uVar8 <= param_3)) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = param_3 / uVar8;
      }
      param_3 = param_3 - uVar6 * uVar8;
      goto LAB_010883cc;
    }
  }
  if (uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_010883cc:
  puVar1 = (undefined8 *)(lVar7 + param_3 * 0x20);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[3];
  param_1[2] = puVar1[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}


