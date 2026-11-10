/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c2c3c; name: FUN_032c2c3c
 */


void FUN_032c2c3c(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar4 < (int)param_1[1] * 2) {
    FUN_02fec8dc(param_1,param_2,uVar4 * 2 + 2);
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  lVar7 = *param_3;
  uVar1 = (int)lVar7 * -0x61c8864f;
  uVar2 = (int)((ulong)lVar7 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar6 = (ulong)((uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar4);
  lVar5 = *param_1;
  lVar8 = *(long *)(lVar5 + uVar6 * 0x10);
  iVar3 = 1;
  do {
    if (lVar8 == -1) {
LAB_032c2cb4:
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
      uVar6 = -(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4;
      *(long *)(lVar5 + uVar6) = *param_3;
      *(undefined8 *)(*param_1 + uVar6 + 8) = *param_4;
      return;
    }
    if (lVar8 == lVar7) {
      iVar3 = 0;
      goto LAB_032c2cb4;
    }
    uVar6 = (ulong)((int)uVar6 + 1U & uVar4);
    lVar8 = *(long *)(lVar5 + uVar6 * 0x10);
  } while( true );
}


