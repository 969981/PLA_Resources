/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064fba0; name: FUN_0064fba0
 */


void FUN_0064fba0(undefined8 *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6 = param_1 + 2;
  *puVar6 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar3 = (long *)FUN_00612290();
  param_1[5] = plVar3;
  sVar4 = strlen(param_3);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 0064fd20 to 0064fd27 has its CatchHandler @ 0064fd68 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar8 = (void *)((long)param_1 + 0x11);
    *(char *)puVar6 = (char)((int)sVar4 << 1);
    if (sVar4 != 0) goto LAB_0064fc5c;
  }
  else {
    uVar9 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar9,1);
    param_1[2] = uVar9 | 1;
    param_1[3] = sVar4;
    param_1[4] = pvVar8;
LAB_0064fc5c:
    memcpy(pvVar8,param_3,sVar4);
  }
  *(undefined1 *)((long)pvVar8 + sVar4) = 0;
  puVar7 = param_1 + 6;
  *puVar7 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  plVar3 = (long *)FUN_00612290();
  param_1[9] = plVar3;
  sVar4 = strlen(param_4);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 0064fd28 to 0064fd2f has its CatchHandler @ 0064fd30 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar8 = (void *)((long)param_1 + 0x31);
    *(char *)puVar7 = (char)((int)sVar4 << 1);
    if (sVar4 == 0) goto LAB_0064fcf8;
  }
  else {
    uVar9 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar9,1);
    param_1[6] = uVar9 | 1;
    param_1[7] = sVar4;
    param_1[8] = pvVar8;
  }
  memcpy(pvVar8,param_4,sVar4);
LAB_0064fcf8:
  *(undefined1 *)((long)pvVar8 + sVar4) = 0;
  FUN_0067d580(param_1 + 10,puVar6,puVar7);
  return;
}


