/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cce40; name: FUN_028cce40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_028cce40(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined1 auVar12 [16];
  
  if ((param_4 & 1) == 0) {
    puVar8 = (undefined8 *)FUN_02b68f84(param_2,param_3);
  }
  else if ((*PTR_DAT_04387fd0 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04387fd0);
    puVar8 = (undefined8 *)PTR_DAT_04387fd8;
    uVar13 = _UNK_0388a138;
    uVar11 = _DAT_0388a130;
    if (iVar6 != 0) {
      puVar1 = (undefined8 *)(PTR_DAT_04387fd8 + 0x20);
      *(undefined8 *)(PTR_DAT_04387fd8 + 0x28) = 0;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar8 + 8) = 0;
      *puVar8 = 0;
      *(undefined8 *)((long)puVar8 + 0x18) = uVar13;
      *(undefined8 *)((long)puVar8 + 0x10) = uVar11;
      __cxa_guard_release(PTR_DAT_04387fd0);
    }
  }
  else {
    puVar8 = (undefined8 *)PTR_DAT_04387fd8;
  }
  uVar13 = puVar8[1];
  uVar11 = *puVar8;
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (lVar9 = (long)*(short *)(*(long *)(param_1 + 0x10) + (ulong)param_3 * 2), -1 < lVar9)) {
    if (*(char *)(param_2 + 0x450) != '\0') {
      plVar10 = *(long **)(param_2 + 0x58);
      plVar7 = *(long **)(param_2 + 0x60);
      if (plVar10 != plVar7) {
        do {
          sVar3 = *(short *)((long)plVar10 + 10);
          sVar4 = (**(code **)(*(long *)(*(long *)(*plVar10 + 0x58) + 0x58) + 0x10))();
          if ((int)(short)param_3 < (int)sVar3 + (int)sVar4) {
            plVar7 = (long *)(*(long *)(*plVar10 + 0x58) + 0x58);
            uVar5 = (**(code **)(*plVar7 + 0x58))(plVar7,param_3 - *(ushort *)((long)plVar10 + 10));
            if (*(uint *)(param_2 + 0x454) < uVar5) {
              puVar8 = (undefined8 *)FUN_02b690d4(param_2,param_3);
              uVar13 = puVar8[1];
              uVar11 = *puVar8;
              goto LAB_028ccf70;
            }
            break;
          }
          plVar10 = plVar10 + 2;
        } while (plVar7 != plVar10);
      }
    }
    do {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x80) + lVar9);
      if ((bVar2 & 1) != 0) {
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar9 * 0x30);
        uVar13 = puVar8[1];
        uVar11 = *puVar8;
      }
    } while ((bVar2 >> 1 & 1) == 0);
  }
LAB_028ccf70:
  auVar12._8_8_ = uVar13;
  auVar12._0_8_ = uVar11;
  return auVar12;
}


