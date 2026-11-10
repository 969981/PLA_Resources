/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00831694; name: FUN_00831694
 */


void FUN_00831694(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  plVar3 = (long *)*param_2;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      if (*plVar2 == *param_3) {
        if (plVar2 == plVar3) {
          if (plVar2 == (long *)param_2[1]) {
            *param_2 = 0;
            param_2[1] = 0;
            lVar1 = plVar2[6];
            lVar4 = plVar2[7];
          }
          else {
            *param_2 = plVar3[6];
            lVar1 = plVar2[6];
            lVar4 = plVar2[7];
          }
        }
        else {
          if (plVar2 == (long *)param_2[1]) {
            param_2[1] = plVar2[7];
          }
          lVar1 = plVar2[6];
          lVar4 = plVar2[7];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x30) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x38) = lVar4;
        }
        lVar4 = param_2[2];
        lVar1 = *(long *)(lVar4 + 0x20);
        if (*(long *)(lVar4 + 0x18) == 0) {
          if (lVar1 == 0) {
            plVar2[4] = 0;
            plVar2[5] = 0;
            *(long **)(lVar4 + 0x18) = plVar2;
            goto LAB_0083174c;
          }
        }
        else if (lVar1 != 0) {
          *(long **)(lVar1 + 0x20) = plVar2;
          plVar2[4] = 0;
          plVar2[5] = lVar1;
LAB_0083174c:
          *(long **)(lVar4 + 0x20) = plVar2;
        }
        if (*(long **)(lVar4 + 8) == plVar2) {
          if (*(long **)(lVar4 + 0x10) == plVar2) {
            *(undefined8 *)(lVar4 + 8) = 0;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            lVar1 = plVar2[2];
            lVar4 = plVar2[3];
          }
          else {
            *(long *)(lVar4 + 8) = plVar2[2];
            lVar1 = plVar2[2];
            lVar4 = plVar2[3];
          }
        }
        else {
          if (*(long **)(lVar4 + 0x10) == plVar2) {
            *(long *)(lVar4 + 0x10) = plVar2[3];
          }
          lVar1 = plVar2[2];
          lVar4 = plVar2[3];
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar4;
        }
        local_30[0] = 0;
        goto LAB_00831788;
      }
      plVar2 = (long *)plVar2[6];
    } while (plVar2 != (long *)0x0);
  }
  local_30[0] = 0x2c0a;
LAB_00831788:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


