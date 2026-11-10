/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd5968; name: FUN_02cd5968
 */


long * FUN_02cd5968(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  byte *local_60;
  ulong uStack_58;
  
  plVar7 = param_1 + 1;
  if (plVar7 != param_2) {
    bVar1 = *(byte *)(param_2 + 4);
    uStack_58 = param_2[5];
    local_60 = (byte *)param_2[6];
    if ((bVar1 & 1) == 0) {
      local_60 = (byte *)((long)param_2 + 0x21);
      uStack_58 = (ulong)(bVar1 >> 1);
    }
    iVar3 = FUN_027656b4(param_5,&local_60);
    if (-1 < iVar3) {
      uStack_58 = *(ulong *)(param_5 + 8);
      local_60 = *(byte **)(param_5 + 0x10);
      if ((*param_5 & 1) == 0) {
        local_60 = param_5 + 1;
        uStack_58 = (ulong)(*param_5 >> 1);
      }
      iVar3 = FUN_027656b4(param_2 + 4,&local_60);
      if (-1 < iVar3) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar4 = (long *)param_2[1];
      if (plVar4 == (long *)0x0) {
        plVar4 = param_2 + 2;
        plVar6 = (long *)*plVar4;
        if ((long *)*plVar6 != param_2) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar4;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (plVar6 == plVar7) {
LAB_02cd5c50:
        if (param_2[1] == 0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
        *param_3 = (long)plVar6;
        return plVar6;
      }
      uStack_58 = (ulong)(*(byte *)(plVar6 + 4) >> 1);
      local_60 = (byte *)((long)plVar6 + 0x21);
      if ((*(byte *)(plVar6 + 4) & 1) != 0) {
        uStack_58 = plVar6[5];
        local_60 = (byte *)plVar6[6];
      }
      iVar3 = FUN_027656b4(param_5,&local_60);
      if (iVar3 < 0) goto LAB_02cd5c50;
      if ((long *)*plVar7 != (long *)0x0) {
        param_1 = param_1 + 1;
        plVar7 = (long *)*plVar7;
        do {
          bVar1 = *(byte *)(plVar7 + 4);
          uStack_58 = plVar7[5];
          local_60 = (byte *)plVar7[6];
          if ((bVar1 & 1) == 0) {
            local_60 = (byte *)((long)plVar7 + 0x21);
            uStack_58 = (ulong)(bVar1 >> 1);
          }
          iVar3 = FUN_027656b4(param_5,&local_60);
          if (iVar3 < 0) {
            plVar4 = (long *)*plVar7;
            if (plVar4 == (long *)0x0) goto LAB_02cd5c64;
            param_1 = plVar7;
          }
          else {
            uStack_58 = (ulong)(*param_5 >> 1);
            local_60 = param_5 + 1;
            if ((*param_5 & 1) != 0) {
              uStack_58 = *(ulong *)(param_5 + 8);
              local_60 = *(byte **)(param_5 + 0x10);
            }
            iVar3 = FUN_027656b4(plVar7 + 4,&local_60);
            if (-1 < iVar3) goto LAB_02cd5c3c;
            param_1 = plVar7 + 1;
            plVar4 = (long *)*param_1;
            if (plVar4 == (long *)0x0) goto LAB_02cd5c3c;
          }
          plVar7 = plVar4;
        } while( true );
      }
      goto LAB_02cd5c44;
    }
  }
  plVar4 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      plVar6 = param_2;
      do {
        plVar4 = (long *)plVar6[2];
        bVar2 = (long *)*plVar4 == plVar6;
        plVar6 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    uStack_58 = (ulong)(*param_5 >> 1);
    local_60 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      local_60 = param_5 + 1;
    }
    else {
      uStack_58 = *(ulong *)(param_5 + 8);
    }
    iVar3 = FUN_027656b4(plVar4 + 4,&local_60);
    if (-1 < iVar3) {
      if ((long *)*plVar7 != (long *)0x0) {
        param_1 = param_1 + 1;
        plVar7 = (long *)*plVar7;
        do {
          bVar1 = *(byte *)(plVar7 + 4);
          uStack_58 = plVar7[5];
          local_60 = (byte *)plVar7[6];
          if ((bVar1 & 1) == 0) {
            local_60 = (byte *)((long)plVar7 + 0x21);
            uStack_58 = (ulong)(bVar1 >> 1);
          }
          iVar3 = FUN_027656b4(param_5,&local_60);
          if (iVar3 < 0) {
            plVar4 = (long *)*plVar7;
            if (plVar4 == (long *)0x0) {
LAB_02cd5c64:
              *param_3 = (long)plVar7;
              return plVar7;
            }
            param_1 = plVar7;
          }
          else {
            uStack_58 = (ulong)(*param_5 >> 1);
            local_60 = param_5 + 1;
            if ((*param_5 & 1) != 0) {
              uStack_58 = *(ulong *)(param_5 + 8);
              local_60 = *(byte **)(param_5 + 0x10);
            }
            iVar3 = FUN_027656b4(plVar7 + 4,&local_60);
            if (-1 < iVar3) {
LAB_02cd5c3c:
              *param_3 = (long)plVar7;
              return param_1;
            }
            param_1 = plVar7 + 1;
            plVar4 = (long *)*param_1;
            if (plVar4 == (long *)0x0) goto LAB_02cd5c3c;
          }
          plVar7 = plVar4;
        } while( true );
      }
LAB_02cd5c44:
      *param_3 = (long)plVar7;
      return plVar7;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar4;
  return plVar4 + 1;
}


