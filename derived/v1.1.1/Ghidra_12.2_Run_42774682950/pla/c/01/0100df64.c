/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0100df64; name: FUN_0100df64
 */


void FUN_0100df64(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar1 = PTR_DAT_0437c908;
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c908 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00ebe89c();
    uVar6 = (*pcVar4)(uVar6,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*puVar1 != '\0') && (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00ebe89c();
    uVar7 = (*pcVar4)(uVar7,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x0100e018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(uVar6,uVar7);
  return;
}


