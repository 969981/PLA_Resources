/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840240; name: FUN_00840240
 */


void FUN_00840240(long param_1,long *param_2,undefined2 param_3,int param_4)

{
  void *__dest;
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_88;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 auStack_68 [8];
  
  if (*(int *)(param_1 + 0x24) != 0) {
    local_88 = 0;
    FUN_007ecf14(&local_88);
    lVar10 = local_88 - *(long *)(param_1 + 8);
    plVar5 = (long *)FUN_007ecfa4();
    puVar3 = PTR_DAT_043773c0;
    lVar7 = 0;
    if (*plVar5 != 0) {
      lVar7 = lVar10 / *plVar5;
    }
    if (param_4 <= lVar7) {
      uVar6 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      FUN_00851594(auStack_68,uVar6,0);
      uVar1 = (*(uint *)(param_1 + 0x5f0) >> 1 & 0x55555555) +
              (*(uint *)(param_1 + 0x5f0) & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = (uVar1 >> 4 & 0x7070707) + (uVar1 & 0x7070707);
      uVar1 = (uVar1 >> 8 & 0xf000f) + (uVar1 & 0xf000f);
      FUN_00855004(*(undefined8 *)puVar3);
      uVar4 = FUN_0085158c();
      if ((uVar1 & 0x1f) + (uVar1 >> 0x10) != (uVar4 & 0xffff) - 1) {
        __dest = (void *)(param_1 + 0x28);
        uVar4 = (*(int *)((long)param_2 + 0x34) + (uint)*(ushort *)(*(long *)puVar3 + 0x50) * -2) -
                0x31;
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = (*(int *)(param_1 + 0x24) - 4U) / uVar4;
        }
        uVar1 = uVar1 + 1;
        memcpy(__dest,*(void **)(param_1 + 0x18),3);
        bVar2 = *(byte *)(param_1 + 0x10);
        uVar12 = (uint)bVar2;
        if ((uint)bVar2 < (uVar1 & 0xff)) {
          uVar8 = uVar4 * bVar2 + 3;
          do {
            *(char *)(param_1 + 0x2b) = (char)uVar1;
            *(char *)(param_1 + 0x2c) = (char)uVar12;
            *(char *)(param_1 + 0x2d) = (char)(uVar8 >> 8);
            *(char *)(param_1 + 0x2e) = (char)uVar8;
            if (uVar12 == (uVar1 & 0xff) - 1) {
              uVar9 = *(int *)(param_1 + 0x24) - (uVar8 & 0xffff);
              uVar11 = uVar9 + (uVar8 & 0xffff);
              if (*(uint *)(param_1 + 0x20) <= uVar11) {
                return;
              }
            }
            else {
              uVar11 = uVar4 + (uVar8 & 0xffff);
              uVar9 = uVar4;
              if (*(uint *)(param_1 + 0x20) <= uVar11) {
                return;
              }
            }
            memcpy((void *)(param_1 + 0x2f),
                   (void *)(*(long *)(param_1 + 0x18) + (ulong)(ushort)uVar8),(ulong)uVar9);
            local_78 = 0;
            local_70 = 0;
            local_88._0_4_ = CONCAT22(0x9800,param_3);
            lVar7 = (**(code **)(*param_2 + 0x70))
                              (param_2,&local_88,
                               ((int)(void *)(param_1 + 0x2f) + uVar9) - (int)__dest,&local_78);
            if (lVar7 == 0) {
              if (*(int *)(*(long *)PTR_DAT_04377ce8 + 0x4c) +
                  *(int *)(*(long *)PTR_DAT_04377ce8 + 0x48) != 0) {
                *(char *)(param_1 + 0x10) = (char)uVar12;
                return;
              }
              *(undefined1 *)(param_1 + 0x10) = 0;
              goto LAB_00840458;
            }
            FUN_0084695c(&local_88,param_2,__dest);
            uVar12 = uVar12 + 1;
            uVar8 = uVar11;
          } while (uVar12 < (uVar1 & 0xff));
        }
        *(undefined1 *)(param_1 + 0x10) = 0;
        *(undefined1 *)(param_1 + 0x5f4) = 1;
LAB_00840458:
        FUN_007ecf14((long *)(param_1 + 8));
      }
    }
  }
  return;
}


