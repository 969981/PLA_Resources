/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006c0f68; name: FUN_006c0f68
 */


undefined8 FUN_006c0f68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  *(undefined2 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x15d) = 0;
  *(long *)(param_1 + 0x178) = param_1 + 0x118;
  *(long *)(param_1 + 0x180) = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    *(undefined1 *)(param_1 + 0x158) = 1;
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_002bbef8(param_1 + 0x30,param_1 + 0x150);
  if (*(char *)(param_1 + 0x81) != '\0') {
    *(undefined1 *)(param_1 + 0x15c) = 1;
  }
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0x238) = *(long *)(param_1 + 0xa0);
    *(long *)(param_1 + 0x240) = param_1 + 0xb2;
  }
  auVar6 = NEON_ext(*(undefined1 (*) [16])(param_1 + 200),*(undefined1 (*) [16])(param_1 + 200),8,1)
  ;
  *(long *)(param_1 + 600) = auVar6._8_8_;
  *(long *)(param_1 + 0x250) = auVar6._0_8_;
  lVar5 = *(long *)(*(long *)(param_1 + 0x178) + 0x20);
  if (((lVar5 == 0) && (lVar5 = *(long *)(*(long *)(param_1 + 0x178) + 0x28), lVar5 == 0)) ||
     (*(long *)(lVar5 + 0x28) == *(long *)(lVar5 + 0x20))) {
    return 1;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x120) + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar4 = FUN_002bbb44(param_1 + 0x150);
  return uVar4;
}


