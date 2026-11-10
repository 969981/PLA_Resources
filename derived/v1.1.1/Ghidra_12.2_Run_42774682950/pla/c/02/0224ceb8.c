/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0224ceb8; name: FUN_0224ceb8
 */


void FUN_0224ceb8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar4;
  double dVar5;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  puVar4 = *(undefined8 **)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437c708 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar3 = FUN_00ea12ac();
    puVar4 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(puVar4,uVar3);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar5 = (double)FUN_00150a90(param_1,iVar1 + 2,0);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_4 + (param_3[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0224d000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,(float)dVar5);
  return;
}


