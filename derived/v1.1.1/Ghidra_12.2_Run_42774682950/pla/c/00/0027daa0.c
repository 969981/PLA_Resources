/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027daa0; name: FUN_0027daa0
 */


undefined8
FUN_0027daa0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 local_78;
  long lStack_70;
  undefined4 local_68;
  undefined8 local_60;
  long lStack_58;
  
  if ((*(char *)(*(long *)(param_3 + 0x238) + 0x240) != '\0') || (*(int *)(param_3 + 0x10) != 0x3f))
  {
    local_68 = *(undefined4 *)(param_5 + 0x14);
    lVar4 = *(long *)(param_3 + 0x3e0);
    lVar3 = *(long *)(param_3 + 1000);
    local_78 = param_2;
    lStack_70 = param_3;
    local_60 = param_4;
    lStack_58 = param_5;
    if ((((*(long *)(param_3 + 0x3f0) != 0) &&
         ((pcVar2 = *(code **)(*(long *)(param_3 + 0x3f0) + 0x28), pcVar2 != (code *)0x0 &&
          (uVar1 = (*pcVar2)(&local_78), (uVar1 & 1) != 0)))) ||
        ((lVar4 != 0 &&
         ((pcVar2 = *(code **)(lVar4 + 0x28), pcVar2 != (code *)0x0 &&
          (uVar1 = (*pcVar2)(&local_78), (uVar1 & 1) != 0)))))) ||
       ((lVar3 != 0 &&
        ((pcVar2 = *(code **)(lVar3 + 0x28), pcVar2 != (code *)0x0 &&
         (uVar1 = (*pcVar2)(&local_78), (uVar1 & 1) != 0)))))) {
LAB_0027db98:
      *(undefined1 *)(param_3 + 9) = 1;
      return 1;
    }
    if ((*(uint *)(param_5 + 0x14) == 3) ||
       (lVar3 = *(long *)(*(long *)(param_3 + 0x238) + (ulong)*(uint *)(param_5 + 0x14) * 8 + 0x340)
       , lVar3 == 0)) {
      FUN_00271760(param_3,0x80);
    }
    else {
      FUN_00877958(param_2,*(undefined8 *)(lVar3 + 8),0x3f);
      uVar1 = FUN_0027dbd0(param_1,param_2,param_3,lVar3,param_4,param_5);
      if ((uVar1 & 1) != 0) goto LAB_0027db98;
    }
  }
  return 0;
}


