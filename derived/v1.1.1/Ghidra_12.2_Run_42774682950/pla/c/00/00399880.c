/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399880; name: FUN_00399880
 */


void FUN_00399880(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = FUN_00399990(param_2,*param_3);
  uVar3 = *(long *)(param_2 + 8) - 1U & *(long *)(param_2 + 0x10) + lVar1;
  lVar1 = *(long *)(param_2 + 0x20);
  puVar4 = *(undefined8 **)(lVar1 + uVar3 * 8);
  if (puVar4 != (undefined8 *)0x0) {
    if (puVar4 == *(undefined8 **)(lVar1 + (uVar3 ^ 1) * 8)) {
      uVar3 = uVar3 & 0xfffffffffffffffe;
      plVar6 = (long *)(*(long *)(lVar1 + uVar3 * 8) + 8);
      plVar7 = (long *)*plVar6;
      if (plVar7 != (long *)0x0) {
        plVar5 = plVar6;
        do {
          uVar2 = FUN_00399d40(*(undefined8 *)plVar7[4],*param_3);
          lVar1 = 8;
          if ((uVar2 & 1) == 0) {
            lVar1 = 0;
            plVar5 = plVar7;
          }
          plVar7 = *(long **)((long)plVar7 + lVar1);
        } while (plVar7 != (long *)0x0);
        if ((plVar5 != plVar6) &&
           (uVar2 = FUN_00399d40(*param_3,*(undefined8 *)plVar5[4]), (uVar2 & 1) == 0)) {
          if (param_4 != (long *)0x0) {
            *param_4 = (long)plVar5;
          }
          *param_1 = plVar5[4];
LAB_0039995c:
          param_1[1] = param_2;
          param_1[2] = uVar3;
          goto LAB_00399960;
        }
      }
    }
    else {
      do {
        uVar2 = FUN_00399b24(*puVar4,*param_3);
        if ((uVar2 & 1) != 0) {
          *param_1 = (long)puVar4;
          goto LAB_0039995c;
        }
        puVar4 = (undefined8 *)puVar4[2];
      } while (puVar4 != (undefined8 *)0x0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_00399960:
  param_1[3] = uVar3;
  return;
}


