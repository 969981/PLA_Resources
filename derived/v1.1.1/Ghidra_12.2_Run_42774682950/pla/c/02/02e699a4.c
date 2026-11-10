/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e699a4; name: FUN_02e699a4
 */


undefined8 FUN_02e699a4(long param_1,ulong param_2,char param_3,long *param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  plVar4 = (long *)*param_4;
  if (plVar4 != (long *)0x0) {
    if ((param_2 & 1) != 0) {
      plVar6 = (long *)0x0;
      plVar7 = (long *)0x0;
      if ((char)plVar4[0xd] != '\0') goto LAB_02e69a1c;
      do {
        plVar5 = plVar4;
        cVar1 = *(char *)((long)plVar5 + 100);
        if (plVar6 == (long *)0x0) {
          if (cVar1 < param_3) goto LAB_02e69a98;
LAB_02e69a00:
          plVar8 = (long *)plVar5[2];
        }
        else {
          if ((param_3 <= cVar1) || (*(char *)((long)plVar6 + 100) <= cVar1)) goto LAB_02e69a00;
LAB_02e69a98:
          nn::os::LockMutex((MutexType *)(plVar5 + 5));
          cVar1 = *(char *)((long)plVar5 + 0x6c);
          nn::os::UnlockMutex((MutexType *)(plVar5 + 5));
          if (cVar1 == '\0') goto LAB_02e69a00;
          plVar6 = plVar5;
          plVar8 = (long *)plVar5[2];
        }
        while( true ) {
          plVar4 = plVar8;
          if (plVar4 == (long *)0x0) {
            if (plVar6 == (long *)0x0) goto LAB_02e69b44;
            (**(code **)(*plVar6 + 0x18))(plVar6);
            uVar3 = 1;
            goto LAB_02e69b48;
          }
          plVar7 = plVar5;
          if ((char)plVar4[0xd] == '\0') break;
LAB_02e69a1c:
          uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
          plVar8 = (long *)plVar4[2];
          plVar5 = plVar4;
          if ((uVar2 & 1) != 0) {
            plVar5 = param_4;
            if ((long *)*param_4 != plVar4) {
              plVar5 = plVar7 + 2;
            }
            *plVar5 = (long)plVar8;
            (**(code **)*plVar4)(plVar4);
            (*DAT_0442d150)(7,plVar4);
            plVar5 = plVar7;
          }
        }
      } while( true );
    }
    plVar7 = (long *)0x0;
    plVar6 = plVar4;
    if ((char)plVar4[0xd] != '\0') goto LAB_02e69b18;
LAB_02e69b34:
    plVar6 = plVar4;
    plVar4 = (long *)plVar4[2];
    while (plVar7 = plVar6, plVar4 != (long *)0x0) {
      while( true ) {
        plVar6 = plVar4;
        if ((char)plVar4[0xd] == '\0') goto LAB_02e69b34;
LAB_02e69b18:
        uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar4 = (long *)plVar6[2];
        if ((uVar2 & 1) == 0) break;
        plVar5 = param_4;
        if ((long *)*param_4 != plVar6) {
          plVar5 = plVar7 + 2;
        }
        *plVar5 = (long)plVar4;
        (**(code **)*plVar6)(plVar6);
        (*DAT_0442d150)(7,plVar6);
        if (plVar4 == (long *)0x0) goto LAB_02e69b44;
      }
    }
  }
LAB_02e69b44:
  uVar3 = 0;
LAB_02e69b48:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return uVar3;
}


