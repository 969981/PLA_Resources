/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fc5960; name: FUN_01fc5960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fc5960(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_03889a88;
  uVar1 = _DAT_03889a80;
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[2] = 0x33ca3d70a;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[8] = 0x3f8000003f800000;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


