/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079d740; name: thunk_FUN_007a0178
 */


void thunk_FUN_007a0178(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = param_1[2];
  FUN_0079bf44(&lStack_50,*(undefined8 *)(lStack_48 + 0x18));
  puVar1 = PTR_LAB_04373088;
  lVar2 = lStack_48;
  lVar3 = lStack_60;
  lStack_68 = lStack_50;
  while (lStack_60 = lVar2, lStack_68 != 0) {
    lVar3 = *(long *)(lStack_68 + 8);
    lStack_48 = lStack_60;
    FUN_007a04dc(&lStack_68);
    FUN_007a028c(param_1[2],&lStack_50);
    if ((lVar3 != 0) && (*param_1 == 0)) {
      FUN_002e2ea0(puVar1,lVar3);
    }
    lVar2 = lStack_60;
    lVar3 = lStack_60;
  }
  if ((*param_1 == 0) && (lVar2 = param_1[2], lVar2 != 0)) {
    lStack_60 = lVar3;
    if ((*(long *)(lVar2 + 0x20) != 0) && (FUN_007a08e8(lVar2), *(long *)(lVar2 + 0x28) == 0)) {
      FUN_002ee710(*(undefined8 *)(lVar2 + 0x20));
    }
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  return;
}


