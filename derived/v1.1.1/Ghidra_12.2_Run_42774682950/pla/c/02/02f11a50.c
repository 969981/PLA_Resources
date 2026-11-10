/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f11a50; name: FUN_02f11a50
 */


undefined8 FUN_02f11a50(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 != 0) {
    puVar2 = (uint *)FUN_02ef6714(*param_1);
    *param_1 = puVar2;
    if (puVar2 == (uint *)0x0) {
      return 0x34;
    }
    iVar6 = *(int *)(lVar7 + 4);
    if (iVar6 != 0) {
      plVar5 = (long *)(lVar7 + 0x18);
      do {
        if (puVar2[1] == *(uint *)(plVar5 + -2)) {
          iVar3 = *(int *)((long)plVar5 + 0xc);
          if (iVar3 != 0) {
            iVar6 = *(int *)((long)plVar5 + -0xc);
            uVar1 = *puVar2;
            lVar7 = plVar5[-1];
            uVar4 = 0;
LAB_02f11b7c:
            FUN_02ef6420(puVar2,uVar1,iVar6 << 0x10 | 1,lVar7,iVar3,uVar4,1);
            return 1;
          }
          lVar7 = plVar5[-1];
          if (lVar7 != 0) {
            iVar6 = *(int *)((long)plVar5 + -0xc);
            uVar1 = *puVar2;
            iVar3 = -1;
            uVar4 = 1;
            goto LAB_02f11b7c;
          }
          if ((*(uint *)(plVar5 + 1) != 0) && (*plVar5 != 0)) {
            FUN_02ef6544(puVar2,*(int *)((long)plVar5 + -0xc) << 0x10 | 1,*plVar5,
                         (ulong)*puVar2 | 0xffffffff00000000,
                         (ulong)*(uint *)(plVar5 + 1) | 0x18c00000000);
            return 1;
          }
        }
        iVar6 = iVar6 + -1;
        plVar5 = plVar5 + 4;
      } while (iVar6 != 0);
    }
    FUN_02ef63b4(puVar2);
    (*DAT_0442d150)(0,puVar2);
  }
  *param_1 = 0;
  return 2;
}


