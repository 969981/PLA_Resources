/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085df88; name: FUN_0085df88
 */


ulong FUN_0085df88(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined1 auStack_58 [16];
  int local_48 [4];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  lVar8 = *(long *)(param_1 + 0x58);
  lVar2 = FUN_0085e854(*(undefined8 *)(lVar8 + 0x1308));
  if (lVar2 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    local_48[0] = 0xc481;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)&local_68);
    FUN_007ee578(auStack_38,local_48);
    puVar5 = auStack_38;
  }
  else {
    lVar2 = FUN_0085e854(*(undefined8 *)(lVar8 + 0x1308));
    lVar3 = FUN_0085e854(*(undefined8 *)(lVar8 + 0x1308));
    FUN_0085cc80(local_48,lVar8,lVar2 + 0x18,lVar3 + 0x38);
    if (local_48[0] == 0) {
      FUN_0082abd0(*(undefined8 *)PTR_DAT_04377550);
      local_68 = 0;
      FUN_007ecf14(&local_68);
      plVar4 = (long *)FUN_007ecfa4();
      puVar1 = PTR_FUN_04378158;
      uVar7 = 0;
      uVar6 = 0;
      *(ulong *)(param_1 + 0x68) = local_68 + *plVar4 * 45000;
      *(char **)(param_1 + 0x40) = "NatTraversalJob::WaitNatTraversal";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_0085e0d0;
    }
    local_68 = 0;
    FUN_007ecf14(&local_68);
    if (local_68 <= *(ulong *)(param_1 + 0x68)) {
      uVar6 = 0xf0000;
      uVar7 = 4;
      goto LAB_0085e0d0;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    local_68 = CONCAT44(local_68._4_4_,0x6446);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_28);
    FUN_007ee578(auStack_58,&local_68);
    puVar5 = auStack_58;
  }
  FUN_007e5cac(uVar9,puVar5);
  uVar6 = 0;
  uVar7 = 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
LAB_0085e0d0:
  return uVar6 | uVar7;
}


