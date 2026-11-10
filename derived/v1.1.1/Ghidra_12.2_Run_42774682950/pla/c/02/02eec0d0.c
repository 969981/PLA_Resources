/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eec0d0; name: FUN_02eec0d0
 */


/* WARNING: Removing unreachable block (ram,0x02eec498) */
/* WARNING: Removing unreachable block (ram,0x02eec644) */

long FUN_02eec0d0(long param_1,undefined8 param_2,undefined2 *param_3,uint *param_4,long *param_5,
                 short *param_6)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  void *__s;
  long *plVar10;
  short sVar11;
  long lVar12;
  MutexType *pMVar13;
  long lVar14;
  long *plVar15;
  ulong __n;
  char local_68 [4];
  char local_64 [4];
  
  *param_4 = 0;
  *param_3 = 0;
  uVar6 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
  if (uVar6 == 0) {
    return 0;
  }
  if (uVar6 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 1) >> 1 & 1) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar8 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x28))(*(long **)(param_1 + 0xe0),0);
    *param_4 = uVar8;
    pMVar13 = DAT_0440a120;
    nn::os::LockMutex(DAT_0440a120);
    uVar6 = *(uint *)(pMVar13 + 0x28);
    if (uVar6 != 0) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar8 / uVar6;
      }
      for (lVar12 = *(long *)(*(long *)(pMVar13 + 0x20) + (ulong)(uVar8 - uVar4 * uVar6) * 8);
          lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
        if (*(uint *)(lVar12 + 0x10) == uVar8) goto LAB_02eec56c;
      }
      goto LAB_02eec578;
    }
  }
  else {
    local_68[0] = '\x01';
    puVar1 = (ushort *)(param_1 + 0x115);
    plVar15 = (long *)*param_5;
    if (((*puVar1 & 0x17) == 1) && (plVar15 == (long *)0x0)) {
      lVar12 = FUN_02eeb888(param_1,param_2);
      if (lVar12 == 0) {
        return 0;
      }
      lVar14 = (*DAT_0442d138)(0,0x10);
      if (lVar14 == 0) {
        return 0;
      }
      FUN_02eef00c();
      uVar6 = *(uint *)(lVar12 + 8);
      *(uint *)(lVar14 + 8) = uVar6;
      local_68[0] = '\x01';
      if ((uVar6 & 0xff) == 0) {
        if (uVar6 >> 0x10 == 0) {
          *(undefined2 *)(lVar14 + 10) = 1;
          *(undefined1 *)(lVar14 + 8) = 1;
          bVar2 = *(byte *)(param_6 + 1);
joined_r0x02eec4ac:
          if (((bVar2 & 1) == 0) ||
             (((bVar2 >> 1 & 1) == 0 &&
              (sVar11 = *param_6, *param_6 = sVar11 + -1, (short)(sVar11 + -1) == 0)))) {
            *param_5 = lVar14;
            return 0;
          }
        }
        else {
          sVar11 = (short)(uVar6 >> 0x10) + -1;
LAB_02eec484:
          *(short *)(lVar14 + 10) = sVar11;
        }
      }
      else {
        iVar7 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
        if (((int)uVar6 >> 0x10) + 1 != iVar7) {
          sVar11 = *(short *)(lVar14 + 10) + 1;
          goto LAB_02eec484;
        }
        if ((*(byte *)puVar1 >> 5 & 1) == 0) {
          *(undefined2 *)(lVar14 + 10) = 0;
          bVar2 = *(byte *)(param_6 + 1);
          goto joined_r0x02eec4ac;
        }
        *(short *)(lVar14 + 10) = *(short *)(lVar14 + 10) + -1;
        *(undefined1 *)(lVar14 + 8) = 0;
      }
      uVar6 = (uint)*(ushort *)(lVar14 + 10);
      *param_5 = lVar14;
    }
    else if ((*puVar1 & 7) == 1) {
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)(*DAT_0442d138)(0,0x10);
        if (plVar15 == (long *)0x0) {
          *param_5 = 0;
          return 0;
        }
        FUN_02eef00c();
        *param_5 = (long)plVar15;
        lVar12 = *(long *)(param_1 + 0xf8);
        if (lVar12 != 0) {
          *(undefined2 *)((long)plVar15 + 10) = *(undefined2 *)(lVar12 + 10);
          *(undefined2 *)(lVar12 + 10) = 0xffff;
          plVar15 = (long *)*param_5;
        }
      }
      local_68[0] = '\x01';
      sVar11 = *(short *)((long)plVar15 + 10);
      if ((char)plVar15[1] == '\0') {
        if (sVar11 != 0) {
          sVar11 = sVar11 + -1;
          goto LAB_02eec1a0;
        }
        *(undefined2 *)((long)plVar15 + 10) = 1;
        *(undefined1 *)(plVar15 + 1) = 1;
        bVar2 = *(byte *)(param_6 + 1);
joined_r0x02eec61c:
        if (((bVar2 & 1) != 0) &&
           (((bVar2 >> 1 & 1) != 0 ||
            (sVar11 = *param_6, *param_6 = sVar11 + -1, (short)(sVar11 + -1) != 0))))
        goto LAB_02eec1a4;
        bVar5 = false;
        uVar6 = 0;
        local_68[0] = '\0';
        uVar3 = *puVar1;
      }
      else {
        iVar7 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
        if (sVar11 + 1 == iVar7) {
          if ((*(byte *)puVar1 >> 5 & 1) == 0) {
            *(undefined2 *)((long)plVar15 + 10) = 0;
            bVar2 = *(byte *)(param_6 + 1);
            goto joined_r0x02eec61c;
          }
          *(short *)((long)plVar15 + 10) = *(short *)((long)plVar15 + 10) + -1;
          *(undefined1 *)(plVar15 + 1) = 0;
        }
        else {
          sVar11 = *(short *)((long)plVar15 + 10) + 1;
LAB_02eec1a0:
          *(short *)((long)plVar15 + 10) = sVar11;
        }
LAB_02eec1a4:
        uVar6 = (uint)*(ushort *)((long)plVar15 + 10);
        bVar5 = true;
        uVar3 = *puVar1;
      }
      if ((uVar3 >> 4 & 1) == 0) {
        if ((uVar3 >> 7 & 1) == 0) {
          lVar14 = FUN_02eedca0(param_1 + 0xe8,param_2,local_64);
          lVar12 = 0;
          if (local_64[0] != '\0') {
            lVar12 = lVar14;
          }
          plVar10 = (long *)(lVar12 + 8);
        }
        else {
          plVar10 = (long *)(param_1 + 0xf8);
        }
        lVar14 = *plVar10;
        lVar12 = plVar15[1];
        *(char *)(lVar14 + 8) = (char)lVar12;
        if ((char)lVar12 == '\0') {
          sVar11 = 1;
        }
        else {
          sVar11 = -1;
        }
        sVar11 = *(short *)((long)plVar15 + 10) + sVar11;
        *(short *)(lVar14 + 10) = sVar11;
        iVar7 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
        if ((sVar11 + 1 == iVar7) && ((*(byte *)puVar1 >> 5 & 1) == 0)) {
          *(undefined2 *)(lVar14 + 10) = 0xffff;
        }
        else if ((*(short *)(lVar14 + 10) == 0) && (*(char *)(lVar14 + 8) == '\0')) {
          *(undefined1 *)(lVar14 + 8) = 1;
        }
      }
      if (!bVar5) {
        return 0;
      }
    }
    else {
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)(*DAT_0442d138)(0,0x38);
        if (plVar15 == (long *)0x0) {
          return 0;
        }
        *plVar15 = (long)&PTR_FUN_042ab0b0;
        iVar7 = (uVar6 & 0xffff) * 50000;
        *(int *)(plVar15 + 1) = iVar7;
        *(int *)((long)plVar15 + 0xc) = iVar7;
        *(short *)(plVar15 + 2) = (short)uVar6;
        *(short *)((long)plVar15 + 0x12) = (short)uVar6;
        plVar15[6] = 0;
        plVar15[3] = 0;
        plVar15[4] = 0;
        plVar15[5] = 0;
        uVar6 = (uVar6 & 0xffff) + 7 >> 3;
        uVar3 = *(ushort *)(param_1 + 0x112);
        uVar8 = (uint)uVar3;
        __n = (ulong)(uVar6 << 1);
        __s = (void *)(*DAT_0442d138)(0,__n);
        plVar15[5] = (long)__s;
        if (__s == (void *)0x0) goto LAB_02eec5f4;
        plVar15[6] = (long)__s + (ulong)uVar6;
        memset(__s,0,__n);
        if (uVar3 < 4) {
          if (uVar3 != 0) goto LAB_02eec38c;
        }
        else {
          uVar8 = 4;
LAB_02eec38c:
          lVar12 = (*DAT_0442d138)(0,uVar8 << 1);
          plVar15[3] = lVar12;
          if (lVar12 == 0) {
LAB_02eec5f4:
            (**(code **)(*plVar15 + 0x10))(plVar15);
            return 0;
          }
          *(uint *)((long)plVar15 + 0x24) = uVar8;
        }
        if ((*(byte *)puVar1 >> 3 & 1) != 0) {
          uVar9 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x68))();
          *(undefined4 *)(plVar15 + 1) = uVar9;
          *(undefined4 *)((long)plVar15 + 0xc) = uVar9;
        }
        *param_5 = (long)plVar15;
      }
      uVar6 = FUN_02eebb6c(param_1,plVar15,local_68,param_6);
      if (local_68[0] == '\0') {
        return 0;
      }
    }
    *param_3 = (short)uVar6;
    uVar8 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x28))(*(long **)(param_1 + 0xe0),uVar6);
    *param_4 = uVar8;
    pMVar13 = DAT_0440a120;
    nn::os::LockMutex(DAT_0440a120);
    uVar6 = *(uint *)(pMVar13 + 0x28);
    if (uVar6 != 0) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar8 / uVar6;
      }
      for (lVar12 = *(long *)(*(long *)(pMVar13 + 0x20) + (ulong)(uVar8 - uVar4 * uVar6) * 8);
          lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
        if (*(uint *)(lVar12 + 0x10) == uVar8) goto LAB_02eec56c;
      }
      goto LAB_02eec578;
    }
  }
  lVar12 = 0;
LAB_02eec578:
  nn::os::UnlockMutex(pMVar13);
  return lVar12;
LAB_02eec56c:
  *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
  goto LAB_02eec578;
}


