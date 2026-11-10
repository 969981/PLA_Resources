/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f3a7c; name: FUN_006f3a7c
 */


void FUN_006f3a7c(undefined8 *param_1,undefined8 *param_2,char *param_3,char *param_4,
                 undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  
  *param_1 = *param_2;
  lVar5 = param_2[1];
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar3 = (long *)FUN_00612290();
  param_1[5] = plVar3;
  sVar4 = strlen(param_3);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 006f3c04 to 006f3c0b has its CatchHandler @ 006f3c24 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x11);
    *(char *)(param_1 + 2) = (char)((int)sVar4 << 1);
    if (sVar4 != 0) goto LAB_006f3b40;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    param_1[2] = uVar7 | 1;
    param_1[3] = sVar4;
    param_1[4] = pvVar6;
LAB_006f3b40:
    memcpy(pvVar6,param_3,sVar4);
  }
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  plVar3 = (long *)FUN_00612290();
  param_1[9] = plVar3;
  sVar4 = strlen(param_4);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 006f3c0c to 006f3c13 has its CatchHandler @ 006f3c14 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x31);
    *(char *)(param_1 + 6) = (char)((int)sVar4 << 1);
    if (sVar4 == 0) goto LAB_006f3bdc;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    param_1[6] = uVar7 | 1;
    param_1[7] = sVar4;
    param_1[8] = pvVar6;
  }
  memcpy(pvVar6,param_4,sVar4);
LAB_006f3bdc:
  *(undefined1 *)((long)pvVar6 + sVar4) = 0;
                    /* try { // try from 006f3be4 to 006f3beb has its CatchHandler @ 006f3c38 */
  FUN_006f3df8(param_1 + 10,param_5);
  return;
}


