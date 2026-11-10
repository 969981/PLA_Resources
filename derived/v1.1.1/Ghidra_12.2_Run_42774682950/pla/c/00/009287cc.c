/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009287cc; name: FUN_009287cc
 */


undefined1 FUN_009287cc(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined1 local_24 [4];
  
  if ((param_2 == 1) || (param_2 == -1)) {
    local_24[0] = *(undefined1 *)(param_1 + 0x71);
    uVar3 = FUN_0099c458(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28),local_24);
    if ((uVar3 & 1) != 0) {
      iVar2 = FUN_009982d4(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28),local_24);
      lVar1 = 0;
      if (iVar2 - 2U < 4) {
        lVar1 = (ulong)(iVar2 - 2U) + 1;
      }
      plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0x28) + 0x98);
      iVar2 = (int)lVar1;
      if (plVar4 != (long *)0x0) {
        iVar5 = *(int *)(&DAT_03a75714 + (ulong)((iVar2 + param_2 + 5U & 0xff) % 5) * 4);
        plVar6 = plVar4;
        do {
          if ((int)plVar6[4] == iVar5) goto joined_r0x00928988;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
        iVar5 = *(int *)(&DAT_03a75714 + ((lVar1 + (long)param_2 * 2 + 5U) % 5) * 4);
        plVar6 = plVar4;
        do {
          if ((int)plVar6[4] == iVar5) goto joined_r0x00928988;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      if (plVar4 != (long *)0x0) {
        iVar5 = *(int *)(&DAT_03a75714 + (ulong)((iVar2 + param_2 * 3 + 5U & 0xff) % 5) * 4);
        plVar6 = plVar4;
        do {
          if ((int)plVar6[4] == iVar5) goto joined_r0x00928988;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
        iVar5 = *(int *)(&DAT_03a75714 + ((lVar1 + (long)param_2 * 4 + 5U) % 5) * 4);
        plVar6 = plVar4;
        do {
          if ((int)plVar6[4] == iVar5) goto joined_r0x00928988;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      if (plVar4 != (long *)0x0) {
        iVar5 = *(int *)(&DAT_03a75714 + (ulong)((iVar2 + param_2 * 5 + 5U & 0xff) % 5) * 4);
        plVar6 = plVar4;
        while ((int)plVar6[4] != iVar5) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0x1f;
          }
        }
joined_r0x00928988:
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (*(int *)(plVar4 + 4) == iVar5) {
            return *(undefined1 *)(plVar4 + 2);
          }
        }
      }
    }
  }
  return 0x1f;
}


