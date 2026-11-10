/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d2ee0; name: FUN_008d2ee0
 */


void FUN_008d2ee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  FUN_008d2c60(param_1,param_1 + 1,param_1 + 2);
  puVar1 = param_1 + 3;
  if (puVar1 == param_2) {
    return;
  }
  lVar4 = 0x18;
  uVar6 = *puVar1;
  iVar5 = (int)uVar6;
  puVar7 = param_1 + 2;
  do {
    if (iVar5 != 0) {
      uVar8 = *puVar7;
      iVar5 = (int)((ulong)uVar6 >> 0x20);
      if ((int)((ulong)uVar8 >> 0x20) < iVar5) {
        lVar9 = lVar4;
        do {
          lVar3 = lVar9 + -8;
          *(undefined8 *)((long)param_1 + lVar9) = uVar8;
          if (lVar3 == 0) {
            puVar7 = param_1;
            goto LAB_008d2f28;
          }
          uVar8 = *(undefined8 *)((long)param_1 + lVar9 + -0x10);
          lVar9 = lVar3;
        } while ((int)((ulong)uVar8 >> 0x20) < iVar5);
        puVar7 = (undefined8 *)((long)param_1 + lVar3);
LAB_008d2f28:
        *puVar7 = uVar6;
      }
    }
    puVar2 = puVar1 + 1;
    lVar4 = lVar4 + 8;
    if (puVar2 == param_2) {
      return;
    }
    uVar6 = *puVar2;
    iVar5 = (int)uVar6;
    puVar7 = puVar1;
    puVar1 = puVar2;
  } while( true );
}


