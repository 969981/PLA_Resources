/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e77fdc; name: FUN_00e77fdc
 */


void FUN_00e77fdc(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar1 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00b4fc10();
    uVar6 = (*pcVar4)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar1 = FUN_00150cc0(param_1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_00150cc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00e7814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(*param_4,uVar6,iVar1 != 0,iVar2 != 0);
  return;
}


