/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dddb38; name: FUN_02dddb38
 */


void FUN_02dddb38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 byte param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 auStack_58 [8];
  
  FUN_008c4b3c(param_1 + 0xc0);
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x18), puVar12 != (undefined8 *)0x0)) {
    puVar9 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    puVar2 = (undefined8 *)PTR_DAT_043794b8;
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar5 = PTR_DAT_043794c8,
       puVar2 = (undefined8 *)PTR_DAT_043794b8, iVar8 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar6 = PTR_DAT_043794d8, iVar8 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      puVar2 = (undefined8 *)PTR_DAT_043794b8;
      *(undefined **)PTR_DAT_043794b8 = puVar5;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    if (puVar9 != (undefined8 *)0x0) {
      while (puVar9 != puVar2) {
        puVar9 = (undefined8 *)*puVar9;
        if (puVar9 == (undefined8 *)0x0) goto LAB_02dddcc0;
      }
      lVar10 = FUN_00ab4364(puVar12 + 0x14,auStack_58);
      if ((lVar10 == 0) ||
         (plVar13 = *(long **)(*(long *)(lVar10 + 0x208) + 0x88), plVar13 == (long *)0x0))
      goto LAB_02dddcc0;
      plVar1 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar12 = (undefined8 *)plVar13[0xb];
      puVar2 = (undefined8 *)plVar13[0xc];
      iVar8 = -1;
      do {
        if (puVar12 == puVar2) {
LAB_02dddc2c:
          *(int *)(param_1 + 0xd0) = iVar8;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          goto LAB_02dddcc8;
        }
        sVar7 = FUN_02b6f370(*puVar12,param_3);
        if (-1 < sVar7) {
          iVar8 = (int)(short)(*(short *)((long)puVar12 + 10) + sVar7);
          goto LAB_02dddc2c;
        }
        puVar12 = puVar12 + 2;
      } while( true );
    }
  }
LAB_02dddcc0:
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
LAB_02dddcc8:
  *(undefined8 *)(param_1 + 0xa8) = param_4[1];
  uVar11 = *param_4;
  *(undefined4 *)(param_1 + 0x15c) = 3;
  *(undefined8 *)(param_1 + 0xa0) = uVar11;
  *(byte *)(param_1 + 0x10c) = param_5 & 1;
  *(undefined1 *)(param_1 + 0x158) = 1;
  return;
}


