/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085dde4; name: FUN_0085dde4
 */


ulong FUN_0085dde4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  char *pcVar10;
  long lStack_70;
  long local_68;
  int local_60 [4];
  undefined1 auStack_50 [16];
  
  plVar6 = &lStack_70;
  lVar4 = *(long *)(param_1 + 0x58);
  lVar1 = FUN_0085e854(*(undefined8 *)(lVar4 + 0x1308));
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    local_60[0] = 0xc481;
    local_68._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_68);
    FUN_007ee578(auStack_50,local_60);
    FUN_007e5cac(uVar5,auStack_50);
    uVar7 = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar8 = 1;
  }
  else {
    lVar1 = FUN_0085e854(*(undefined8 *)(lVar4 + 0x1308));
    lVar2 = FUN_0085e854(*(undefined8 *)(lVar4 + 0x1308));
    FUN_0085cc80(local_60,lVar4,lVar1 + 0x18,lVar2 + 0x38);
    if (local_60[0] == 0) {
      FUN_0082abd0(*(undefined8 *)PTR_DAT_04377550);
      uVar8 = 0;
      uVar7 = 0;
      lVar1 = 45000;
      pcVar10 = "NatTraversalJob::WaitNatTraversal";
      puVar9 = PTR_FUN_04378158;
    }
    else {
      plVar6 = &local_68;
      uVar7 = 0xf0000;
      uVar8 = 4;
      lVar1 = 15000;
      pcVar10 = "NatTraversalJob::RetryStartNatTraversal";
      puVar9 = PTR_FUN_04378150;
    }
    *plVar6 = 0;
    FUN_007ecf14(plVar6);
    plVar3 = (long *)FUN_007ecfa4();
    lVar4 = *plVar6;
    lVar2 = *plVar3;
    *(char **)(param_1 + 0x40) = pcVar10;
    *(undefined **)(param_1 + 0x30) = puVar9;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x68) = lVar4 + lVar2 * lVar1;
  }
  return uVar7 | uVar8;
}


