/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e3fc4; name: FUN_005e3fc4
 */


void FUN_005e3fc4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *__s;
  ulong *puVar7;
  ulong uVar8;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *param_2 = uVar5;
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *param_3 = uVar5;
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *param_4 = uVar5;
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_5 = uVar5;
  FUN_002ef750(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar6 = (ulong *)*param_6;
  *param_6 = uVar5;
  if (puVar6 == (ulong *)0x0) goto LAB_005e40ec;
  uVar4 = *puVar6;
  if ((uVar4 & 1) == 0) {
    __s = puVar6 + 1;
joined_r0x005e4070:
    if (uVar4 >> 1 != 0) {
      uVar8 = uVar4 >> 1;
      puVar7 = __s + uVar8 * 2 + -2;
      __ptr = (void *)*puVar7;
      *puVar7 = 0;
      while( true ) {
        if (__ptr != (void *)0x0) {
                    /* try { // try from 005e40a4 to 005e40a7 has its CatchHandler @ 005e410c */
          free(__ptr);
        }
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + -2;
        if (uVar8 == 0) break;
        __ptr = (void *)*puVar7;
        *puVar7 = 0;
      }
    }
    memset(__s,0xab,(uVar4 >> 1) << 4);
    if ((*puVar6 & 1) != 0) {
      uVar4 = puVar6[1];
      goto LAB_005e40d0;
    }
  }
  else {
    __s = (ulong *)puVar6[1];
    if (__s != (ulong *)0x0) goto joined_r0x005e4070;
    uVar4 = 0;
LAB_005e40d0:
    FUN_002e2ea0(PTR_LAB_04373088,uVar4);
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar6);
LAB_005e40ec:
                    /* try { // try from 005e40ec to 005e40f3 has its CatchHandler @ 005e4108 */
  FUN_002ef790(param_1 + 0x38);
  return;
}


