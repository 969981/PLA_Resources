/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030057f4; name: FUN_030057f4
 */


void FUN_030057f4(long param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  uint *puVar7;
  undefined1 *local_a0;
  uint *local_98;
  uint local_90 [2];
  uint *local_88;
  char *pcStack_80;
  int *local_78;
  code *local_58;
  char local_4c [4];
  int local_48 [2];
  
  plVar6 = (long *)(param_3 + (long)(int)param_2 * 0x68);
  local_98 = local_90;
  local_a0 = &LAB_030059d0;
  puVar7 = (uint *)(*(long *)(param_1 + 0x18) + ((long)((ulong)param_2 << 0x20) >> 0x1d));
  pcStack_80 = local_4c;
  local_4c[0] = '\0';
  if (*plVar6 != param_4) {
    puVar7 = puVar7 + 1;
  }
  local_78 = local_48;
  local_58 = FUN_03005a5c;
  local_90[0] = param_2;
  local_88 = puVar7;
  FUN_032c18bc(param_1,param_4,&local_a0);
  if (local_98 != (uint *)0x0) {
    if (local_58 == (code *)0x1) {
      puVar5 = local_98 + -2;
      do {
        lVar4 = *(long *)puVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar3) {
          *(long *)puVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 != 0) goto joined_r0x030058ec;
    }
    else if (local_58 != (code *)0x0) {
      (*local_58)(local_98,0);
      goto joined_r0x030058ec;
    }
    FUN_0333dda0();
  }
joined_r0x030058ec:
  if (local_4c[0] == '\0') {
    lVar4 = *(long *)(param_1 + 0x18);
    puVar5 = (uint *)(lVar4 + (long)local_48[0] * 8);
    if (*(long *)(param_3 + (long)local_48[0] * 0x68) != param_4) {
      puVar5 = puVar5 + 1;
    }
    while (uVar1 = *puVar5, uVar1 != param_2) {
      puVar5 = (uint *)(lVar4 + (long)(int)uVar1 * 8);
      if (*(long *)(param_3 + (long)(int)uVar1 * 0x68) != param_4) {
        puVar5 = puVar5 + 1;
      }
    }
    puVar7 = (uint *)(lVar4 + (long)(int)param_2 * 8);
    if (*plVar6 != param_4) {
      puVar7 = puVar7 + 1;
    }
    *puVar5 = *puVar7;
  }
  *puVar7 = 0x7fffffff;
  return;
}


