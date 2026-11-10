/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291948c; name: FUN_0291948c
 */


void FUN_0291948c(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,long param_6,byte param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_02909348(param_2,param_5 == 1 | param_7 & 1,1);
  *param_2 = &PTR_LAB_04275358;
  param_2[9] = &PTR_LAB_04275480;
  param_2[10] = &PTR_LAB_04275560;
  FUN_00947cf8(param_2 + 0x87,param_3);
  FUN_00947cf8(param_2 + 0x88,param_4);
  *(int *)(param_2 + 0x89) = param_5;
  param_2[0x8a] = param_6;
  if (param_6 != 0) {
    lVar5 = *(long *)(param_6 + 0x58);
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[0x92] = 0;
  param_2[0x91] = 0;
  param_2[0x90] = 0;
  param_2[0x8f] = 0;
  param_2[0x8e] = 0;
  param_2[0x8d] = 0;
  param_2[0x8c] = 0;
  param_2[0x8b] = 0;
  *(undefined4 *)(param_2 + 0x93) = param_1;
  *(undefined4 *)((long)param_2 + 0x49c) = 0;
  *(undefined4 *)((long)param_2 + 0x49f) = 0;
  return;
}


