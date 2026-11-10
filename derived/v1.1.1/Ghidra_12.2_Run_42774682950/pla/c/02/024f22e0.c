/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024f22e0; name: FUN_024f22e0
 */


void FUN_024f22e0(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar5 = *(undefined8 **)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 2,"class_cast"), iVar2 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b4fc10();
    puVar5 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(puVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x024f236c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*puVar5);
  return;
}


