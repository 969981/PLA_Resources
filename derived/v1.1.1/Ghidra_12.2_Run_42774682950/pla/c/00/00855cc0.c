/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855cc0; name: FUN_00855cc0
 */


void FUN_00855cc0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int local_548 [8];
  ulong local_528;
  undefined8 local_520;
  undefined8 *local_518;
  undefined8 local_508;
  undefined8 uStack_500;
  int local_4f8;
  int local_4f4;
  undefined8 *local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e4;
  undefined8 local_4dc;
  undefined4 local_58 [2];
  
  if (param_3 == 0) {
    uVar5 = 0x10407;
  }
  else {
    plVar1 = *(long **)(param_2 + 0x48);
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_2 + 0x6f0) == 0) {
        if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00855f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_3);
          return;
        }
      }
      else if (*(int *)(param_2 + 0x10) == 0) {
        uVar5 = 0x2c09;
        goto LAB_00855d24;
      }
      local_520 = 0;
      local_518 = (undefined8 *)0x0;
      FUN_007e8f94(&local_520);
      local_508 = 0;
      uStack_500 = 0;
      FUN_007e8f94(&local_508);
      local_4f0 = &local_4e4;
      local_4f4 = 0;
      local_4e8 = 0x18;
      local_4e4 = 0;
      local_4dc = 0;
      FUN_007e8fa0(&local_508,&local_508);
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)((long)local_4f0 + lVar7 + 0x30);
        *puVar6 = 0;
        *(undefined8 *)((long)local_4f0 + lVar7 + 0x38) = 0;
        FUN_007e8fa0(&local_508,&local_508,(long)local_4f4 + (long)puVar6);
        lVar7 = lVar7 + 0x30;
      } while (lVar7 != 0x450);
      local_528 = 0;
      FUN_007ecf14(&local_528);
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 == param_2) {
LAB_00855ecc:
        local_548[0] = 0x2c09;
      }
      else {
        puVar6 = local_518;
        if (local_518 != &local_520) goto LAB_00855e34;
LAB_00855e50:
        if (local_528 <= *(ulong *)(lVar7 + 0x660)) {
          if (local_4f8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar3 = FUN_007e9088(&local_508);
            if (lVar3 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = lVar3 - local_4f4;
            }
            lVar8 = lVar3 + 0x10;
            FUN_007f0ce0(lVar8);
            FUN_007e8fa0(&local_520,&local_520,lVar3);
          }
          FUN_007f0fc8(local_548,param_3 + 0x628);
          FUN_007f105c(lVar8,local_548);
          FUN_007e34a4(local_548);
          while (lVar7 = *(long *)(lVar7 + 8), puVar6 = local_518, lVar7 != param_2) {
            while( true ) {
              if (puVar6 == &local_520) goto LAB_00855e50;
LAB_00855e34:
              uVar2 = FUN_007f0f48(puVar6 + 2,param_3 + 0x628);
              if ((uVar2 & 1) != 0) break;
              puVar6 = (undefined8 *)puVar6[1];
            }
          }
          goto LAB_00855ecc;
        }
        FUN_007f0878(param_3,lVar7 + 0x10);
        FUN_007f0508(local_548,param_3);
        if (local_548[0] != 0) goto LAB_00855ecc;
        FUN_007f07cc(lVar7 + 0x10);
        FUN_007e8fec(param_2,lVar7);
        FUN_007e8fc4(param_2 + 0x18,param_2 + 0x18,lVar7 + *(int *)(param_2 + 0x2c));
        local_548[0] = 0;
      }
      piVar4 = local_548;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)piVar4 | 4),(Result *)local_58);
      goto LAB_00855ef0;
    }
    uVar5 = 0x10408;
  }
LAB_00855d24:
  local_520 = CONCAT44(local_520._4_4_,uVar5);
  local_548[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_520 | 4),(Result *)local_548);
  piVar4 = (int *)&local_520;
LAB_00855ef0:
  FUN_007ee578(param_1,piVar4);
  return;
}


