/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137af64; name: FUN_0137af64
 */


/* WARNING: Removing unreachable block (ram,0x0137af94) */

void FUN_0137af64(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *param_2;
  uVar5 = uVar1;
  if (0xff < uVar1) {
    uVar5 = 0x100;
  }
  *param_1 = uVar5;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar2 = param_2;
      puVar3 = param_1;
      do {
        *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
        lVar8 = lVar8 + 2;
        *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 4;
      } while ((ulong)uVar5 - ((ulong)uVar5 & 1) != lVar8);
      if ((uVar5 & 1) == 0) goto LAB_0137afdc;
    }
    *(undefined8 *)(param_1 + lVar8 * 2 + 2) = *(undefined8 *)(param_2 + lVar8 * 2 + 2);
  }
LAB_0137afdc:
  if (uVar1 < 0x100) {
    uVar7 = (ulong)uVar5;
    uVar6 = uVar7;
    if (uVar5 < 0x100) {
      uVar6 = 0xff;
    }
    uVar5 = ((int)uVar6 - uVar5) + 1;
    uVar6 = uVar6 - uVar7;
    if ((uVar5 & 3) != 0) {
      lVar8 = -((ulong)uVar5 & 3);
      do {
        (param_1 + uVar7 * 2 + 2)[0] = 0x9ab5f3d9;
        (param_1 + uVar7 * 2 + 2)[1] = 0xc0ea4754;
        uVar7 = uVar7 + 1;
        bVar4 = lVar8 != -1;
        lVar8 = lVar8 + 1;
      } while (bVar4);
    }
    if (2 < uVar6) {
      param_1 = param_1 + uVar7 * 2 + 4;
      do {
        uVar7 = uVar7 + 4;
        param_1[-2] = 0x9ab5f3d9;
        param_1[-1] = 0xc0ea4754;
        param_1[0] = 0x9ab5f3d9;
        param_1[1] = 0xc0ea4754;
        param_1[2] = 0x9ab5f3d9;
        param_1[3] = 0xc0ea4754;
        param_1[4] = 0x9ab5f3d9;
        param_1[5] = 0xc0ea4754;
        param_1 = param_1 + 8;
      } while (uVar7 < 0x100);
    }
  }
  return;
}


