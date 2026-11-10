/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0101701c; name: FUN_0101701c
 */


void FUN_0101701c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar3 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar3 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar2 = PTR_DAT_0437c708;
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar3 = FUN_00155630(param_1,iVar3 + 1,"class_cast"), iVar3 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00ea12ac();
    uVar7 = (*pcVar5)(uVar7,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar3 = param_2[1];
  lVar4 = FUN_001511d0(param_1,iVar3 + 1);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*puVar2 != '\0') && (iVar3 = FUN_00155630(param_1,iVar3 + 1,"class_cast"), iVar3 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00ea12ac();
    uVar8 = (*pcVar5)(uVar8,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar3 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar3 + 1;
  dVar1 = (double)FUN_00150a90(param_1,iVar3 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x010170f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)((float)dVar1,uVar7,uVar8);
  return;
}


