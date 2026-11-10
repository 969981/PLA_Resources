/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6947c; name: FUN_02e6947c
 */


long * FUN_02e6947c(long param_1,float *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  uVar5 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x270) = uVar5;
  if (*(char *)(param_1 + 0x218) != '\0') {
    plVar6 = (long *)FUN_02e69718(param_1,param_2);
    goto LAB_02e695d4;
  }
  if (*(long **)(param_1 + 0x278) != (long *)0x0) {
    plVar8 = (long *)0x0;
    plVar1 = (long *)(param_1 + 0x278);
    plVar6 = *(long **)(param_1 + 0x278);
    do {
      if ((char)plVar6[0xd] == '\0') {
        nn::os::LockMutex((MutexType *)(plVar6 + 5));
        cVar2 = *(char *)((long)plVar6 + 0x6c);
        nn::os::UnlockMutex((MutexType *)(plVar6 + 5));
        if (cVar2 != '\0') {
          fVar12 = (float)(**(code **)(*plVar6 + 0x38))(plVar6);
          bVar3 = *(char *)((long)plVar6 + 0x6a) != '\0';
          plVar8 = (long *)plVar6[2];
          if (plVar8 == (long *)0x0) goto LAB_02e695cc;
          plVar9 = plVar6;
          goto LAB_02e69538;
        }
        plVar9 = (long *)plVar6[2];
LAB_02e694fc:
        plVar8 = plVar6;
      }
      else {
        uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar9 = (long *)plVar6[2];
        if ((uVar7 & 1) == 0) goto LAB_02e694fc;
        plVar10 = plVar1;
        if ((long *)*plVar1 != plVar6) {
          plVar10 = plVar8 + 2;
        }
        *plVar10 = (long)plVar9;
        (**(code **)*plVar6)(plVar6);
        (*DAT_0442d150)(7,plVar6);
      }
      plVar6 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  goto LAB_02e69600;
LAB_02e69538:
  do {
    plVar10 = plVar8;
    if ((char)plVar8[0xd] == '\0') {
      nn::os::LockMutex((MutexType *)(plVar8 + 5));
      cVar2 = *(char *)((long)plVar8 + 0x6c);
      nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
      if (cVar2 != '\0') {
        fVar13 = (float)(**(code **)(*plVar8 + 0x38))(plVar8);
        cVar2 = *(char *)((long)plVar8 + 0x6a);
        bVar4 = cVar2 != '\0';
        if (bVar3) {
          if (cVar2 != '\0') goto LAB_02e695a0;
          bVar3 = true;
        }
        else if (cVar2 == '\0') {
LAB_02e695a0:
          if (fVar13 == 0.0) {
            if (((0.0 < fVar12) || (*(char *)((long)plVar6 + 100) < *(char *)((long)plVar8 + 100)))
               || ((*(char *)((long)plVar8 + 100) == *(char *)((long)plVar6 + 100) &&
                   ((float)(*(long *)(param_1 + 0x270) - plVar6[9]) / DAT_0440a328 <
                    (float)(*(long *)(param_1 + 0x270) - plVar8[9]) / DAT_0440a328))))
            goto LAB_02e695bc;
          }
          else if (fVar13 < fVar12) goto LAB_02e695bc;
        }
        else {
          bVar4 = true;
LAB_02e695bc:
          plVar6 = plVar8;
          fVar12 = fVar13;
          bVar3 = bVar4;
        }
      }
      plVar11 = (long *)plVar8[2];
    }
    else {
      uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar11 = (long *)plVar8[2];
      if ((uVar7 & 1) != 0) {
        plVar10 = plVar1;
        if ((long *)*plVar1 != plVar8) {
          plVar10 = plVar9 + 2;
        }
        *plVar10 = (long)plVar11;
        (**(code **)*plVar8)(plVar8);
        (*DAT_0442d150)(7,plVar8);
        plVar10 = plVar9;
      }
    }
    plVar8 = plVar11;
    plVar9 = plVar10;
  } while (plVar8 != (long *)0x0);
LAB_02e695cc:
  *param_2 = fVar12;
  if (bVar3) goto LAB_02e695d4;
LAB_02e69600:
  plVar6 = (long *)FUN_02e691d4(param_1);
LAB_02e695d4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return plVar6;
}


