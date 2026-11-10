/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f33c9c; name: FUN_02f33c9c
 */


undefined4 FUN_02f33c9c(long param_1)

{
  HardwareOpusDecoder *this;
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (DAT_0440bd40 == 0) {
    this = (HardwareOpusDecoder *)(*DAT_0442d138)(5,0x40);
    if (this == (HardwareOpusDecoder *)0x0) {
      return 2;
    }
    nn::codec::HardwareOpusDecoder::HardwareOpusDecoder(this,0);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this,8000,1);
    uVar2 = (**(code **)(*(long *)this + 0x10))(this,12000,1);
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = (**(code **)(*(long *)this + 0x10))(this,16000,1);
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = (**(code **)(*(long *)this + 0x10))(this,24000,1);
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    DAT_0440bd40 = (**(code **)(*(long *)this + 0x10))(this,48000,1);
    if (DAT_0440bd40 <= uVar2) {
      DAT_0440bd40 = uVar2;
    }
    uVar1 = (**(code **)(*(long *)this + 0x10))(this,8000,2);
    uVar2 = (**(code **)(*(long *)this + 0x10))(this,12000,2);
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = (**(code **)(*(long *)this + 0x10))(this,16000,2);
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = (**(code **)(*(long *)this + 0x10))(this,24000,2);
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    DAT_0440bd48 = (**(code **)(*(long *)this + 0x10))(this,48000,2);
    if (DAT_0440bd48 <= uVar2) {
      DAT_0440bd48 = uVar2;
    }
    (*(code *)**(undefined8 **)this)(this);
    (*DAT_0442d150)(5,this);
  }
  if (*(char *)(param_1 + 0x8a0) == '\0') {
    *(undefined1 *)(param_1 + 0xa60) = 0;
    nn::os::InitializeEvent(param_1 + 0xa38,0,1);
    FUN_02e717c0(&LAB_02f354cc,param_1,&DAT_0440a520,param_1 + 0x860,"AK::OpusDecodingThread");
    uVar3 = 1;
    if (*(char *)(param_1 + 0x8a0) == '\0') {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


