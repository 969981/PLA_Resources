/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf3010; name: FUN_02bf3010
 */


void FUN_02bf3010(long param_1,long *param_2)

{
  uint uVar1;
  char *__s;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  puVar7 = PTR_PTR_0434a080;
  plVar10 = (long *)(*param_2 + 0x20);
  lVar12 = *plVar10;
  iVar3 = *(int *)(*param_2 + 0x28);
  lVar2 = 0;
  if (lVar12 != 0) {
    lVar2 = lVar12 + (long)plVar10;
  }
  if (iVar3 != 0) {
    uVar13 = 0;
    lVar12 = tpidr_el0;
    do {
      uStack_88 = 0x3f8000007f7fffee;
      local_90 = 0x3d4ccccd00000201;
      uStack_78 = 0x40a00000;
      local_80 = 0x3f800000;
      local_70 = 0;
      uStack_68 = 0;
      local_a0 = 0;
      uStack_98 = 0x3f003f000000;
      local_b0 = 0;
      local_a8 = (long *)0x0;
      __s = (char *)(*(ulong *)(lVar2 + (long)(int)uVar13 * 0x18) & 0xfffffffffffffffe);
      if (__s != (char *)0x0) {
        sVar8 = strlen(__s);
        uVar1 = (int)sVar8 + 1;
        puVar9 = (undefined8 *)
                 (**(code **)(*(long *)puVar7 + 0x10))
                           (puVar7,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar9 = puVar7;
        *(uint *)(puVar9 + 1) = uVar1;
        memcpy(puVar9 + 2,__s,(ulong)uVar1);
        local_b0 = (ulong)(puVar9 + 2) | 1;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),&local_b0);
      uVar6 = local_b0;
      if ((local_a8 != (long *)0x0) && (local_a8[1] != 0)) {
        plVar10 = local_a8 + 2;
        do {
          lVar11 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*local_a8 + 0x18))();
          uVar6 = local_b0;
        }
      }
      local_b0 = uVar6;
      if ((uVar6 & 1) != 0) {
        lVar11 = *(long *)(lVar12 + 0x38d490);
        if (lVar11 == 0) {
          lVar11 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar11;
        }
        plVar10 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
        *(undefined8 *)(uVar6 - 0x11) = 0;
        (**(code **)(*plVar10 + 0x18))
                  (plVar10,(undefined8 *)(uVar6 - 0x11),(long)*(int *)(uVar6 - 9) + 0x10);
      }
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(long)iVar3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


