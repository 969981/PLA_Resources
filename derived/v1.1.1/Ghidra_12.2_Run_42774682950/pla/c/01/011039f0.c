/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011039f0; name: FUN_011039f0
 */


void FUN_011039f0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0xd28);
  lVar4 = *param_3;
  lVar3 = 1;
  lVar1 = 5;
  do {
    if (plVar2[-0x165] == *param_2) {
      if (plVar2[-0x156] == lVar4) {
        lVar3 = 0;
LAB_01103c14:
        *(undefined2 *)(plVar2 + lVar3 * 0x12 + -0x160) = 0;
        plVar2[lVar3 * 0x12 + -0x162] = 0;
        plVar2[lVar3 * 0x12 + -0x161] = 0;
        plVar2[lVar3 * 0x12 + -0x163] = 0;
        *(undefined4 *)((long)plVar2 + lVar3 * 0x90 + -0xafc) = 0;
        *(undefined2 *)(plVar2 + lVar3 * 0x12 + -0x15f) = 0;
        *(undefined8 *)((long)plVar2 + lVar3 * 0x90 + -0xaf4) = 0xffffffff00000000;
        *(undefined1 *)((long)plVar2 + lVar3 * 0x90 + -0xaec) = 0;
        *(undefined4 *)(plVar2 + lVar3 * 0x12 + -0x15d) = 0;
        plVar2[lVar3 * 0x12 + -0x15c] = (long)&DAT_cbf29ce484222645;
        plVar2[lVar3 * 0x12 + -0x15b] = (long)&DAT_cbf29ce484222645;
        plVar2[lVar3 * 0x12 + -0x15a] = (long)&DAT_cbf29ce484222645;
        plVar2[lVar3 * 0x12 + -0x159] = 0;
        plVar2[lVar3 * 0x12 + -0x158] = 0;
        plVar2[lVar3 * 0x12 + -0x157] = 0;
        plVar2[lVar3 * 0x12 + -0x156] = (long)&DAT_cbf29ce484222645;
        *(undefined1 *)(plVar2 + lVar3 * 0x12 + -0x155) = 0;
        *(undefined4 *)((long)plVar2 + lVar3 * 0x90 + -0xaa4) = 0;
        plVar2[lVar3 * 0x12 + -0x154] = (long)&DAT_cbf29ce484222645;
        plVar2[lVar3 * 0x12 + -0x153] = 0;
        plVar2[lVar3 * 0x12 + -0x152] = 0;
        return;
      }
      if (plVar2[-0x144] == lVar4) goto LAB_01103c14;
      if (plVar2[-0x132] == lVar4) {
        lVar3 = 2;
        goto LAB_01103c14;
      }
      if (plVar2[-0x120] == lVar4) {
        lVar3 = 3;
        goto LAB_01103c14;
      }
      if (plVar2[-0x10e] == lVar4) {
        lVar3 = 4;
        goto LAB_01103c14;
      }
      if (plVar2[-0xfc] == lVar4) {
        lVar3 = 5;
        goto LAB_01103c14;
      }
      if (plVar2[-0xea] == lVar4) {
        lVar3 = 6;
        goto LAB_01103c14;
      }
      if (plVar2[-0xd8] == lVar4) {
        lVar3 = 7;
        goto LAB_01103c14;
      }
      if (plVar2[-0xc6] == lVar4) {
        lVar3 = 8;
        goto LAB_01103c14;
      }
      if (plVar2[-0xb4] == lVar4) {
        lVar3 = 9;
        goto LAB_01103c14;
      }
      if (plVar2[-0xa2] == lVar4) {
        lVar3 = 10;
        goto LAB_01103c14;
      }
      if (plVar2[-0x90] == lVar4) {
        lVar3 = 0xb;
        goto LAB_01103c14;
      }
      if (plVar2[-0x7e] == lVar4) {
        lVar3 = 0xc;
        goto LAB_01103c14;
      }
      if (plVar2[-0x6c] == lVar4) {
        lVar3 = 0xd;
        goto LAB_01103c14;
      }
      if (plVar2[-0x5a] == lVar4) {
        lVar3 = 0xe;
        goto LAB_01103c14;
      }
      if (plVar2[-0x48] == lVar4) {
        lVar3 = 0xf;
        goto LAB_01103c14;
      }
      if (plVar2[-0x36] == lVar4) {
        lVar3 = 0x10;
        goto LAB_01103c14;
      }
      if (plVar2[-0x24] == lVar4) {
        lVar3 = 0x11;
        goto LAB_01103c14;
      }
      if (plVar2[-0x12] == lVar4) {
        lVar3 = 0x12;
        goto LAB_01103c14;
      }
      if (*plVar2 == lVar4) {
        lVar3 = 0x13;
        goto LAB_01103c14;
      }
    }
    plVar2 = plVar2 + 0x170;
    lVar1 = lVar1 + -1;
    if (lVar1 == 0) {
      return;
    }
  } while( true );
}


