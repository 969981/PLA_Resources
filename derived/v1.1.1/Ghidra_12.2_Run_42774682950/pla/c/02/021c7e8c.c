/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021c7e8c; name: FUN_021c7e8c
 */


void FUN_021c7e8c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8,
                 undefined8 *param_9)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b4fc10();
    uVar5 = (*pcVar3)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x021c7f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(*param_8,param_4,*param_5,param_6,param_7,*param_9,uVar5);
  return;
}


