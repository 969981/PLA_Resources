/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008656dc; name: FUN_008656dc
 */


void FUN_008656dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar3 = FUN_00865610();
  if ((uVar3 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar3 = FUN_008656c0();
    puVar1 = PTR_DAT_043780f8;
    if ((uVar3 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_043780f8 == 0) {
      uVar4 = FUN_007e336c();
      plVar5 = (long *)FUN_0081a7a0(0x1f70,uVar4,8);
      if (plVar5 == (long *)0x0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_04378268 = 0;
      }
      else {
        lVar6 = 0;
        do {
          *(undefined4 *)((long)plVar5 + lVar6) = 0;
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0x1f70);
        *(long **)PTR_DAT_04378268 = plVar5;
        FUN_0085a434(plVar5);
        puVar2 = PTR_DAT_04378270;
        plVar5[0x27c] = 0;
        *plVar5 = (long)(puVar2 + 0x10);
        FUN_007e60f4(plVar5 + 0x27d,4);
        *(undefined4 *)(plVar5 + 0x281) = 0;
        plVar5[0x282] = 0;
        plVar5[0x283] = 0;
        FUN_007e5b70(plVar5 + 0x284);
        *(undefined4 *)(plVar5 + 0x28a) = 0;
        FUN_0086bca8(plVar5 + 0x28b);
        *(long **)puVar1 = plVar5;
        local_38[0] = 0;
      }
    }
    else {
      local_38[0] = 0x1040f;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


