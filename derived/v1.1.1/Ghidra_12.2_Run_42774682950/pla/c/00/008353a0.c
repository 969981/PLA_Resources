/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008353a0; name: FUN_008353a0
 */


void FUN_008353a0(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 local_70 [4];
  
  uVar4 = FUN_00847434();
  local_70[0] = (**(code **)(*param_1 + 0x18))(param_1);
  plVar5 = (long *)FUN_00844598(uVar4,local_70);
  (**(code **)(*(long *)*plVar5 + 0x78))();
  uVar6 = (**(code **)(*(long *)*plVar5 + 0x80))();
  puVar3 = PTR_DAT_043773c0;
  do {
    if ((uVar6 & 1) != 0) {
      return;
    }
    plVar1 = (long *)0x0;
    if (*(long *)(*plVar5 + 0x50) != 0) {
      plVar1 = (long *)(*plVar5 + 0x50);
    }
    bVar2 = *(byte *)(plVar1 + 5);
    uVar8 = 1;
    if ((bVar2 & 1) != 0) {
      uVar8 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar8 = uVar8 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar8 = uVar8 + 4;
    }
    if ((bVar2 & 8) != 0) {
      uVar8 = uVar8 + 8;
    }
    if (*(short *)((long)plVar1 + 0x2a) != 0) {
      bVar2 = *(byte *)(*plVar1 + (ulong)uVar8);
      lVar7 = FUN_00855004(*(undefined8 *)puVar3);
      if ((bVar2 == 5 || *(long *)(lVar7 + 0x98) != 0) && bVar2 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x008354e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_00835434 + (ulong)(byte)"-38=BGMSX"[bVar2] * 4))();
        return;
      }
    }
    (**(code **)(*(long *)*plVar5 + 0x88))();
    uVar6 = (**(code **)(*(long *)*plVar5 + 0x80))();
  } while( true );
}


