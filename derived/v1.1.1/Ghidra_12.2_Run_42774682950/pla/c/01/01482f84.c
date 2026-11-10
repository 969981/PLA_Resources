/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01482f84; name: FUN_01482f84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01482f84(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_1 + 0x650) != '\0') {
    puVar6 = (undefined8 *)(param_1 + 0x5b0);
    *(undefined1 *)(param_1 + 0x650) = 0;
    do {
      plVar5 = (long *)*puVar6;
      if (plVar5 == (long *)0x0) {
        DAT_000000d8 = 0;
        if ((~_DAT_000000d0 & 9) == 0) {
          *(byte *)(_DAT_00000058 + 0x58) = *(byte *)(_DAT_00000058 + 0x58) | 1;
          _DAT_000000d0 = _DAT_000000d0 & 0xfffffffffffffff7 | 0x60;
          if (*_DAT_00000088 != '\0') {
            FUN_0283b430(_DAT_000000a0,0x80);
          }
          if (*_DAT_00000068 != '\0') {
            FUN_0283b1e8(_DAT_000000a0,0x60);
          }
        }
      }
      else {
        plVar1 = plVar5 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(undefined1 *)(plVar5 + 0x1b) = 0;
        if ((~*(uint *)(plVar5 + 0x1a) & 9) == 0) {
          *(byte *)(plVar5[0xb] + 0x58) = *(byte *)(plVar5[0xb] + 0x58) | 1;
          plVar5[0x1a] = plVar5[0x1a] & 0xfffffffffffffff7U | 0x60;
          if (*(char *)plVar5[0x11] != '\0') {
            FUN_0283b430(plVar5[0x14],plVar5 + 0x10);
          }
          if (*(char *)plVar5[0xd] != '\0') {
            FUN_0283b1e8(plVar5[0x14],plVar5 + 0xc);
          }
        }
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined8 *)(param_1 + 0x650));
  }
  return;
}


