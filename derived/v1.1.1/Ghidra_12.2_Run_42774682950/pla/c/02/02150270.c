/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02150270; name: FUN_02150270
 */


void FUN_02150270(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    param_1 = (undefined8 *)*param_1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03996322;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0x10] = &DAT_cbf29ce484222645;
    param_1[0x11] = &DAT_03996322;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    FUN_0014ff10(param_2,0);
    return;
  }
  FUN_00154110(param_2,
               "sol: no matching function call takes this number of arguments and the specified types"
              );
  return;
}


