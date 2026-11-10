/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010298f8; name: FUN_010298f8
 */


void FUN_010298f8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  double dVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar2 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar2 = FUN_00155630(param_1,iVar2 + 1,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00ea12ac();
    uVar6 = (*pcVar4)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  dVar1 = (double)FUN_00150a90(param_1,iVar2 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x01029988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)((float)dVar1,uVar6);
  return;
}


