/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01194444; name: FUN_01194444
 */


void FUN_01194444(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long lStack_80;
  code *local_78;
  undefined8 uStack_70;
  
  uVar2 = FUN_011ab954(*(undefined8 *)(param_1 + 0x1b0));
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x1a8);
    local_78 = FUN_011963e4;
    uStack_70 = 0;
    local_90 = &LAB_011997fc;
    local_a0 = &LAB_011997dc;
    local_98 = FUN_011997f8;
    local_88 = &LAB_01199810;
    lStack_80 = param_1;
    FUN_00d59260(lVar3,*(undefined4 *)(lVar3 + 0x16ac),*(undefined2 *)(lVar3 + 0x16b2),0);
    FUN_0119541c(param_1,0xcf40f8ca234ed1db,&local_a0,1,0,1);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(&lStack_80);
    }
  }
  return;
}


