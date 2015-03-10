#include "color_pallete.h"

namespace cieq {
namespace palette {

//! \note All palette generated from http://www.ncl.ucar.edu/Document/Graphics/color_table_gallery.shtml

//! \see http://www.ncl.ucar.edu/Document/Graphics/ColorTables/matlab_jet.shtml
const std::array<const ci::Color, 64> MatlabJet::palette{{
	ci::Color(0.0000f, 0.0000f, 0.56078f),
	ci::Color(0.0000f, 0.0000f, 0.62353f),
	ci::Color(0.0000f, 0.0000f, 0.68627f),
	ci::Color(0.0000f, 0.0000f, 0.74902f),
	ci::Color(0.0000f, 0.0000f, 0.81176f),
	ci::Color(0.0000f, 0.0000f, 0.87451f),
	ci::Color(0.0000f, 0.0000f, 0.93725f),
	ci::Color(0.0000f, 0.0000f, 1.0000f),
	ci::Color(0.0000f, 0.058824f, 1.0000f),
	ci::Color(0.0000f, 0.12157f, 1.0000f),
	ci::Color(0.0000f, 0.18431f, 1.0000f),
	ci::Color(0.0000f, 0.24706f, 1.0000f),
	ci::Color(0.0000f, 0.30980f, 1.0000f),
	ci::Color(0.0000f, 0.37255f, 1.0000f),
	ci::Color(0.0000f, 0.43529f, 1.0000f),
	ci::Color(0.0000f, 0.49804f, 1.0000f),
	ci::Color(0.0000f, 0.56078f, 1.0000f),
	ci::Color(0.0000f, 0.62353f, 1.0000f),
	ci::Color(0.0000f, 0.68627f, 1.0000f),
	ci::Color(0.0000f, 0.74902f, 1.0000f),
	ci::Color(0.0000f, 0.81176f, 1.0000f),
	ci::Color(0.0000f, 0.87451f, 1.0000f),
	ci::Color(0.0000f, 0.93725f, 1.0000f),
	ci::Color(0.0000f, 1.0000f, 1.0000f),
	ci::Color(0.058824f, 1.0000f, 0.93725f),
	ci::Color(0.12157f, 1.0000f, 0.87451f),
	ci::Color(0.18431f, 1.0000f, 0.81176f),
	ci::Color(0.24706f, 1.0000f, 0.74902f),
	ci::Color(0.30980f, 1.0000f, 0.68627f),
	ci::Color(0.37255f, 1.0000f, 0.62353f),
	ci::Color(0.43529f, 1.0000f, 0.56078f),
	ci::Color(0.49804f, 1.0000f, 0.49804f),
	ci::Color(0.56078f, 1.0000f, 0.43529f),
	ci::Color(0.62353f, 1.0000f, 0.37255f),
	ci::Color(0.68627f, 1.0000f, 0.30980f),
	ci::Color(0.74902f, 1.0000f, 0.24706f),
	ci::Color(0.81176f, 1.0000f, 0.18431f),
	ci::Color(0.87451f, 1.0000f, 0.12157f),
	ci::Color(0.93725f, 1.0000f, 0.058824f),
	ci::Color(1.0000f, 1.0000f, 0.0000f),
	ci::Color(1.0000f, 0.93725f, 0.0000f),
	ci::Color(1.0000f, 0.87451f, 0.0000f),
	ci::Color(1.0000f, 0.81176f, 0.0000f),
	ci::Color(1.0000f, 0.74902f, 0.0000f),
	ci::Color(1.0000f, 0.68627f, 0.0000f),
	ci::Color(1.0000f, 0.62353f, 0.0000f),
	ci::Color(1.0000f, 0.56078f, 0.0000f),
	ci::Color(1.0000f, 0.49804f, 0.0000f),
	ci::Color(1.0000f, 0.43529f, 0.0000f),
	ci::Color(1.0000f, 0.37255f, 0.0000f),
	ci::Color(1.0000f, 0.30980f, 0.0000f),
	ci::Color(1.0000f, 0.24706f, 0.0000f),
	ci::Color(1.0000f, 0.18431f, 0.0000f),
	ci::Color(1.0000f, 0.12157f, 0.0000f),
	ci::Color(1.0000f, 0.058824f, 0.0000f),
	ci::Color(1.0000f, 0.0000f, 0.0000f),
	ci::Color(0.93725f, 0.0000f, 0.0000f),
	ci::Color(0.87451f, 0.0000f, 0.0000f),
	ci::Color(0.81176f, 0.0000f, 0.0000f),
	ci::Color(0.74902f, 0.0000f, 0.0000f),
	ci::Color(0.68627f, 0.0000f, 0.0000f),
	ci::Color(0.62353f, 0.0000f, 0.0000f),
	ci::Color(0.56078f, 0.0000f, 0.0000f),
	ci::Color(0.49804f, 0.0000f, 0.0000f)
}};

//! \see http://www.ncl.ucar.edu/Document/Graphics/ColorTables/matlab_hot.shtml
const std::array<const ci::Color, 64> MatlabHot::palette{{
	ci::Color(0.039216f, 0.0000f, 0.0000f),
	ci::Color(0.082353f, 0.0000f, 0.0000f),
	ci::Color(0.12157f, 0.0000f, 0.0000f),
	ci::Color(0.16471f, 0.0000f, 0.0000f),
	ci::Color(0.20784f, 0.0000f, 0.0000f),
	ci::Color(0.24706f, 0.0000f, 0.0000f),
	ci::Color(0.29020f, 0.0000f, 0.0000f),
	ci::Color(0.32941f, 0.0000f, 0.0000f),
	ci::Color(0.37255f, 0.0000f, 0.0000f),
	ci::Color(0.41569f, 0.0000f, 0.0000f),
	ci::Color(0.45490f, 0.0000f, 0.0000f),
	ci::Color(0.49804f, 0.0000f, 0.0000f),
	ci::Color(0.54118f, 0.0000f, 0.0000f),
	ci::Color(0.58039f, 0.0000f, 0.0000f),
	ci::Color(0.62353f, 0.0000f, 0.0000f),
	ci::Color(0.66667f, 0.0000f, 0.0000f),
	ci::Color(0.70588f, 0.0000f, 0.0000f),
	ci::Color(0.74902f, 0.0000f, 0.0000f),
	ci::Color(0.78824f, 0.0000f, 0.0000f),
	ci::Color(0.83137f, 0.0000f, 0.0000f),
	ci::Color(0.87451f, 0.0000f, 0.0000f),
	ci::Color(0.91373f, 0.0000f, 0.0000f),
	ci::Color(0.95686f, 0.0000f, 0.0000f),
	ci::Color(1.0000f, 0.0000f, 0.0000f),
	ci::Color(1.0000f, 0.039216f, 0.0000f),
	ci::Color(1.0000f, 0.082353f, 0.0000f),
	ci::Color(1.0000f, 0.12157f, 0.0000f),
	ci::Color(1.0000f, 0.16471f, 0.0000f),
	ci::Color(1.0000f, 0.20784f, 0.0000f),
	ci::Color(1.0000f, 0.24706f, 0.0000f),
	ci::Color(1.0000f, 0.29020f, 0.0000f),
	ci::Color(1.0000f, 0.32941f, 0.0000f),
	ci::Color(1.0000f, 0.37255f, 0.0000f),
	ci::Color(1.0000f, 0.41569f, 0.0000f),
	ci::Color(1.0000f, 0.45490f, 0.0000f),
	ci::Color(1.0000f, 0.49804f, 0.0000f),
	ci::Color(1.0000f, 0.54118f, 0.0000f),
	ci::Color(1.0000f, 0.58039f, 0.0000f),
	ci::Color(1.0000f, 0.62353f, 0.0000f),
	ci::Color(1.0000f, 0.66667f, 0.0000f),
	ci::Color(1.0000f, 0.70588f, 0.0000f),
	ci::Color(1.0000f, 0.74902f, 0.0000f),
	ci::Color(1.0000f, 0.78824f, 0.0000f),
	ci::Color(1.0000f, 0.83137f, 0.0000f),
	ci::Color(1.0000f, 0.87451f, 0.0000f),
	ci::Color(1.0000f, 0.91373f, 0.0000f),
	ci::Color(1.0000f, 0.95686f, 0.0000f),
	ci::Color(1.0000f, 1.0000f, 0.0000f),
	ci::Color(1.0000f, 1.0000f, 0.058824f),
	ci::Color(1.0000f, 1.0000f, 0.12157f),
	ci::Color(1.0000f, 1.0000f, 0.18431f),
	ci::Color(1.0000f, 1.0000f, 0.24706f),
	ci::Color(1.0000f, 1.0000f, 0.30980f),
	ci::Color(1.0000f, 1.0000f, 0.37255f),
	ci::Color(1.0000f, 1.0000f, 0.43529f),
	ci::Color(1.0000f, 1.0000f, 0.49804f),
	ci::Color(1.0000f, 1.0000f, 0.56078f),
	ci::Color(1.0000f, 1.0000f, 0.62353f),
	ci::Color(1.0000f, 1.0000f, 0.68627f),
	ci::Color(1.0000f, 1.0000f, 0.74902f),
	ci::Color(1.0000f, 1.0000f, 0.81176f),
	ci::Color(1.0000f, 1.0000f, 0.87451f),
	ci::Color(1.0000f, 1.0000f, 0.93725f),
	ci::Color(1.0000f, 1.0000f, 1.0000f)
}};

//! \see http://www.ncl.ucar.edu/Document/Graphics/ColorTables/MPL_summer.shtml
const std::array<const ci::Color, 128> MPLSummer::palette{{
	ci::Color(0.003922f, 0.501961f, 0.400000f),
	ci::Color(0.011765f, 0.505882f, 0.400000f),
	ci::Color(0.019608f, 0.509804f, 0.400000f),
	ci::Color(0.027451f, 0.513725f, 0.400000f),
	ci::Color(0.035294f, 0.517647f, 0.400000f),
	ci::Color(0.043137f, 0.521569f, 0.400000f),
	ci::Color(0.050980f, 0.525490f, 0.400000f),
	ci::Color(0.058824f, 0.529412f, 0.400000f),
	ci::Color(0.066667f, 0.533333f, 0.400000f),
	ci::Color(0.070588f, 0.535294f, 0.400000f),
	ci::Color(0.082353f, 0.541176f, 0.400000f),
	ci::Color(0.086275f, 0.543137f, 0.400000f),
	ci::Color(0.098039f, 0.549020f, 0.400000f),
	ci::Color(0.101961f, 0.550980f, 0.400000f),
	ci::Color(0.113725f, 0.556863f, 0.400000f),
	ci::Color(0.117647f, 0.558824f, 0.400000f),
	ci::Color(0.129412f, 0.564706f, 0.400000f),
	ci::Color(0.137255f, 0.568627f, 0.400000f),
	ci::Color(0.141176f, 0.570588f, 0.400000f),
	ci::Color(0.152941f, 0.576471f, 0.400000f),
	ci::Color(0.160784f, 0.580392f, 0.400000f),
	ci::Color(0.168627f, 0.584314f, 0.400000f),
	ci::Color(0.172549f, 0.586275f, 0.400000f),
	ci::Color(0.184314f, 0.592157f, 0.400000f),
	ci::Color(0.192157f, 0.596078f, 0.400000f),
	ci::Color(0.200000f, 0.600000f, 0.400000f),
	ci::Color(0.203922f, 0.601961f, 0.400000f),
	ci::Color(0.215686f, 0.607843f, 0.400000f),
	ci::Color(0.223529f, 0.611765f, 0.400000f),
	ci::Color(0.231373f, 0.615686f, 0.400000f),
	ci::Color(0.235294f, 0.617647f, 0.400000f),
	ci::Color(0.247059f, 0.623529f, 0.400000f),
	ci::Color(0.254902f, 0.627451f, 0.400000f),
	ci::Color(0.262745f, 0.631373f, 0.400000f),
	ci::Color(0.270588f, 0.635294f, 0.400000f),
	ci::Color(0.278431f, 0.639216f, 0.400000f),
	ci::Color(0.286275f, 0.643137f, 0.400000f),
	ci::Color(0.290196f, 0.645098f, 0.400000f),
	ci::Color(0.301961f, 0.650980f, 0.400000f),
	ci::Color(0.309804f, 0.654902f, 0.400000f),
	ci::Color(0.317647f, 0.658824f, 0.400000f),
	ci::Color(0.325490f, 0.662745f, 0.400000f),
	ci::Color(0.333333f, 0.666667f, 0.400000f),
	ci::Color(0.341176f, 0.670588f, 0.400000f),
	ci::Color(0.349020f, 0.674510f, 0.400000f),
	ci::Color(0.352941f, 0.676471f, 0.400000f),
	ci::Color(0.364706f, 0.682353f, 0.400000f),
	ci::Color(0.372549f, 0.686275f, 0.400000f),
	ci::Color(0.380392f, 0.690196f, 0.400000f),
	ci::Color(0.388235f, 0.694118f, 0.400000f),
	ci::Color(0.396078f, 0.698039f, 0.400000f),
	ci::Color(0.403922f, 0.701961f, 0.400000f),
	ci::Color(0.411765f, 0.705882f, 0.400000f),
	ci::Color(0.415686f, 0.707843f, 0.400000f),
	ci::Color(0.427451f, 0.713725f, 0.400000f),
	ci::Color(0.435294f, 0.717647f, 0.400000f),
	ci::Color(0.443137f, 0.721569f, 0.400000f),
	ci::Color(0.450980f, 0.725490f, 0.400000f),
	ci::Color(0.458824f, 0.729412f, 0.400000f),
	ci::Color(0.466667f, 0.733333f, 0.400000f),
	ci::Color(0.474510f, 0.737255f, 0.400000f),
	ci::Color(0.478431f, 0.739216f, 0.400000f),
	ci::Color(0.490196f, 0.745098f, 0.400000f),
	ci::Color(0.498039f, 0.749020f, 0.400000f),
	ci::Color(0.505882f, 0.752941f, 0.400000f),
	ci::Color(0.513725f, 0.756863f, 0.400000f),
	ci::Color(0.521569f, 0.760784f, 0.400000f),
	ci::Color(0.529412f, 0.764706f, 0.400000f),
	ci::Color(0.537255f, 0.768627f, 0.400000f),
	ci::Color(0.545098f, 0.772549f, 0.400000f),
	ci::Color(0.552941f, 0.776471f, 0.400000f),
	ci::Color(0.560784f, 0.780392f, 0.400000f),
	ci::Color(0.568627f, 0.784314f, 0.400000f),
	ci::Color(0.576471f, 0.788235f, 0.400000f),
	ci::Color(0.584314f, 0.792157f, 0.400000f),
	ci::Color(0.588235f, 0.794118f, 0.400000f),
	ci::Color(0.600000f, 0.800000f, 0.400000f),
	ci::Color(0.607843f, 0.803922f, 0.400000f),
	ci::Color(0.615686f, 0.807843f, 0.400000f),
	ci::Color(0.623529f, 0.811765f, 0.400000f),
	ci::Color(0.631373f, 0.815686f, 0.400000f),
	ci::Color(0.639216f, 0.819608f, 0.400000f),
	ci::Color(0.647059f, 0.823529f, 0.400000f),
	ci::Color(0.654902f, 0.827451f, 0.400000f),
	ci::Color(0.662745f, 0.831373f, 0.400000f),
	ci::Color(0.670588f, 0.835294f, 0.400000f),
	ci::Color(0.678431f, 0.839216f, 0.400000f),
	ci::Color(0.686275f, 0.843137f, 0.400000f),
	ci::Color(0.694118f, 0.847059f, 0.400000f),
	ci::Color(0.701961f, 0.850980f, 0.400000f),
	ci::Color(0.709804f, 0.854902f, 0.400000f),
	ci::Color(0.713725f, 0.856863f, 0.400000f),
	ci::Color(0.725490f, 0.862745f, 0.400000f),
	ci::Color(0.733333f, 0.866667f, 0.400000f),
	ci::Color(0.741176f, 0.870588f, 0.400000f),
	ci::Color(0.749020f, 0.874510f, 0.400000f),
	ci::Color(0.756863f, 0.878431f, 0.400000f),
	ci::Color(0.764706f, 0.882353f, 0.400000f),
	ci::Color(0.772549f, 0.886275f, 0.400000f),
	ci::Color(0.780392f, 0.890196f, 0.400000f),
	ci::Color(0.788235f, 0.894118f, 0.400000f),
	ci::Color(0.796078f, 0.898039f, 0.400000f),
	ci::Color(0.803922f, 0.901961f, 0.400000f),
	ci::Color(0.811765f, 0.905882f, 0.400000f),
	ci::Color(0.819608f, 0.909804f, 0.400000f),
	ci::Color(0.827451f, 0.913725f, 0.400000f),
	ci::Color(0.835294f, 0.917647f, 0.400000f),
	ci::Color(0.839216f, 0.919608f, 0.400000f),
	ci::Color(0.850980f, 0.925490f, 0.400000f),
	ci::Color(0.858824f, 0.929412f, 0.400000f),
	ci::Color(0.866667f, 0.933333f, 0.400000f),
	ci::Color(0.874510f, 0.937255f, 0.400000f),
	ci::Color(0.882353f, 0.941176f, 0.400000f),
	ci::Color(0.890196f, 0.945098f, 0.400000f),
	ci::Color(0.898039f, 0.949020f, 0.400000f),
	ci::Color(0.905882f, 0.952941f, 0.400000f),
	ci::Color(0.913725f, 0.956863f, 0.400000f),
	ci::Color(0.921569f, 0.960784f, 0.400000f),
	ci::Color(0.929412f, 0.964706f, 0.400000f),
	ci::Color(0.937255f, 0.968627f, 0.400000f),
	ci::Color(0.945098f, 0.972549f, 0.400000f),
	ci::Color(0.952941f, 0.976471f, 0.400000f),
	ci::Color(0.960784f, 0.980392f, 0.400000f),
	ci::Color(0.964706f, 0.982353f, 0.400000f),
	ci::Color(0.976471f, 0.988235f, 0.400000f),
	ci::Color(0.984314f, 0.992157f, 0.400000f),
	ci::Color(0.992157f, 0.996078f, 0.400000f),
	ci::Color(1.000000f, 1.000000f, 0.400000f)
}};

//! \see http://www.ncl.ucar.edu/Document/Graphics/ColorTables/MPL_Paired.shtml
const std::array<const ci::Color, 128> MPLPaired::palette{{
	ci::Color(0.628143f, 0.793295f, 0.882245f),
	ci::Color(0.582468f, 0.764198f, 0.866344f),
	ci::Color(0.536794f, 0.735102f, 0.850442f),
	ci::Color(0.491119f, 0.706005f, 0.834541f),
	ci::Color(0.445444f, 0.676909f, 0.818639f),
	ci::Color(0.399769f, 0.647812f, 0.802737f),
	ci::Color(0.354095f, 0.618716f, 0.786836f),
	ci::Color(0.308420f, 0.589619f, 0.770934f),
	ci::Color(0.262745f, 0.560523f, 0.755033f),
	ci::Color(0.239908f, 0.545975f, 0.747082f),
	ci::Color(0.171396f, 0.502330f, 0.723230f),
	ci::Color(0.148558f, 0.487782f, 0.715279f),
	ci::Color(0.166782f, 0.502268f, 0.692964f),
	ci::Color(0.191649f, 0.519692f, 0.685859f),
	ci::Color(0.266251f, 0.571965f, 0.664544f),
	ci::Color(0.291119f, 0.589389f, 0.657439f),
	ci::Color(0.365721f, 0.641661f, 0.636125f),
	ci::Color(0.415456f, 0.676509f, 0.621915f),
	ci::Color(0.440323f, 0.693933f, 0.614810f),
	ci::Color(0.514925f, 0.746205f, 0.593495f),
	ci::Color(0.564660f, 0.781053f, 0.579285f),
	ci::Color(0.614394f, 0.815902f, 0.565075f),
	ci::Color(0.639262f, 0.833326f, 0.557970f),
	ci::Color(0.684368f, 0.867728f, 0.531057f),
	ci::Color(0.641399f, 0.846413f, 0.499254f),
	ci::Color(0.598431f, 0.825098f, 0.467451f),
	ci::Color(0.576947f, 0.814441f, 0.451549f),
	ci::Color(0.512495f, 0.782468f, 0.403845f),
	ci::Color(0.469527f, 0.761153f, 0.372042f),
	ci::Color(0.426559f, 0.739839f, 0.340238f),
	ci::Color(0.405075f, 0.729181f, 0.324337f),
	ci::Color(0.340623f, 0.697209f, 0.276632f),
	ci::Color(0.297655f, 0.675894f, 0.244829f),
	ci::Color(0.254687f, 0.654579f, 0.213026f),
	ci::Color(0.211719f, 0.633264f, 0.181223f),
	ci::Color(0.249212f, 0.625975f, 0.199369f),
	ci::Color(0.316878f, 0.623945f, 0.236248f),
	ci::Color(0.350711f, 0.622930f, 0.254687f),
	ci::Color(0.452211f, 0.619885f, 0.310004f),
	ci::Color(0.519877f, 0.617855f, 0.346882f),
	ci::Color(0.587543f, 0.615825f, 0.383760f),
	ci::Color(0.655210f, 0.613795f, 0.420638f),
	ci::Color(0.722876f, 0.611765f, 0.457516f),
	ci::Color(0.790542f, 0.609735f, 0.494394f),
	ci::Color(0.858208f, 0.607705f, 0.531273f),
	ci::Color(0.892042f, 0.606690f, 0.549712f),
	ci::Color(0.983206f, 0.598016f, 0.594233f),
	ci::Color(0.975087f, 0.554710f, 0.551942f),
	ci::Color(0.966967f, 0.511403f, 0.509650f),
	ci::Color(0.958847f, 0.468097f, 0.467359f),
	ci::Color(0.950727f, 0.424790f, 0.425067f),
	ci::Color(0.942607f, 0.381484f, 0.382776f),
	ci::Color(0.934487f, 0.338178f, 0.340484f),
	ci::Color(0.930427f, 0.316524f, 0.319339f),
	ci::Color(0.918247f, 0.251565f, 0.255902f),
	ci::Color(0.910127f, 0.208258f, 0.213610f),
	ci::Color(0.902007f, 0.164952f, 0.171319f),
	ci::Color(0.893887f, 0.121646f, 0.129027f),
	ci::Color(0.894994f, 0.132411f, 0.125121f),
	ci::Color(0.903791f, 0.188235f, 0.153203f),
	ci::Color(0.912587f, 0.244060f, 0.181284f),
	ci::Color(0.916986f, 0.271972f, 0.195325f),
	ci::Color(0.930181f, 0.355709f, 0.237447f),
	ci::Color(0.938977f, 0.411534f, 0.265529f),
	ci::Color(0.947774f, 0.467359f, 0.293610f),
	ci::Color(0.956571f, 0.523183f, 0.321692f),
	ci::Color(0.965367f, 0.579008f, 0.349773f),
	ci::Color(0.974164f, 0.634833f, 0.377855f),
	ci::Color(0.982960f, 0.690657f, 0.405936f),
	ci::Color(0.991757f, 0.746482f, 0.434018f),
	ci::Color(0.992803f, 0.728351f, 0.399446f),
	ci::Color(0.993479f, 0.706697f, 0.361892f),
	ci::Color(0.994156f, 0.685044f, 0.324337f),
	ci::Color(0.994833f, 0.663391f, 0.286782f),
	ci::Color(0.995509f, 0.641738f, 0.249227f),
	ci::Color(0.995848f, 0.630911f, 0.230450f),
	ci::Color(0.996863f, 0.598431f, 0.174118f),
	ci::Color(0.997539f, 0.576778f, 0.136563f),
	ci::Color(0.998216f, 0.555125f, 0.099008f),
	ci::Color(0.998893f, 0.533472f, 0.061453f),
	ci::Color(0.999569f, 0.511819f, 0.023899f),
	ci::Color(0.993479f, 0.504314f, 0.026328f),
	ci::Color(0.975548f, 0.521569f, 0.098731f),
	ci::Color(0.957616f, 0.538824f, 0.171134f),
	ci::Color(0.939685f, 0.556078f, 0.243537f),
	ci::Color(0.921753f, 0.573333f, 0.315940f),
	ci::Color(0.903822f, 0.590588f, 0.388343f),
	ci::Color(0.885890f, 0.607843f, 0.460746f),
	ci::Color(0.867958f, 0.625098f, 0.533149f),
	ci::Color(0.850027f, 0.642353f, 0.605552f),
	ci::Color(0.832095f, 0.659608f, 0.677955f),
	ci::Color(0.823130f, 0.668235f, 0.714156f),
	ci::Color(0.796232f, 0.694118f, 0.822760f),
	ci::Color(0.767059f, 0.667451f, 0.823529f),
	ci::Color(0.734579f, 0.627866f, 0.803230f),
	ci::Color(0.702099f, 0.588281f, 0.782930f),
	ci::Color(0.669619f, 0.548697f, 0.762630f),
	ci::Color(0.637140f, 0.509112f, 0.742330f),
	ci::Color(0.604660f, 0.469527f, 0.722030f),
	ci::Color(0.572180f, 0.429942f, 0.701730f),
	ci::Color(0.539700f, 0.390358f, 0.681430f),
	ci::Color(0.507220f, 0.350773f, 0.661130f),
	ci::Color(0.474740f, 0.311188f, 0.640830f),
	ci::Color(0.442261f, 0.271603f, 0.620531f),
	ci::Color(0.424852f, 0.251150f, 0.603860f),
	ci::Color(0.475263f, 0.316786f, 0.603522f),
	ci::Color(0.525675f, 0.382422f, 0.603183f),
	ci::Color(0.550880f, 0.415240f, 0.603014f),
	ci::Color(0.626498f, 0.513695f, 0.602507f),
	ci::Color(0.676909f, 0.579331f, 0.602168f),
	ci::Color(0.727320f, 0.644967f, 0.601830f),
	ci::Color(0.777732f, 0.710604f, 0.601492f),
	ci::Color(0.828143f, 0.776240f, 0.601153f),
	ci::Color(0.878554f, 0.841876f, 0.600815f),
	ci::Color(0.928966f, 0.907512f, 0.600477f),
	ci::Color(0.979377f, 0.973149f, 0.600138f),
	ci::Color(0.984406f, 0.966813f, 0.577409f),
	ci::Color(0.958016f, 0.910650f, 0.539177f),
	ci::Color(0.931626f, 0.854487f, 0.500946f),
	ci::Color(0.905236f, 0.798324f, 0.462714f),
	ci::Color(0.878847f, 0.742161f, 0.424483f),
	ci::Color(0.852457f, 0.685998f, 0.386251f),
	ci::Color(0.826067f, 0.629835f, 0.348020f),
	ci::Color(0.812872f, 0.601753f, 0.328904f),
	ci::Color(0.773287f, 0.517509f, 0.271557f),
	ci::Color(0.746897f, 0.461346f, 0.233326f),
	ci::Color(0.720508f, 0.405183f, 0.195094f),
	ci::Color(0.694118f, 0.349020f, 0.156863f)
}};

//! \see http://www.ncl.ucar.edu/Document/Graphics/ColorTables/MPL_ocean.shtml
const std::array<const ci::Color, 128> MPLOcean::palette{{
	ci::Color(0.000000f, 0.494118f, 0.003922f),
	ci::Color(0.000000f, 0.482353f, 0.011765f),
	ci::Color(0.000000f, 0.470588f, 0.019608f),
	ci::Color(0.000000f, 0.458824f, 0.027451f),
	ci::Color(0.000000f, 0.447059f, 0.035294f),
	ci::Color(0.000000f, 0.435294f, 0.043137f),
	ci::Color(0.000000f, 0.423529f, 0.050980f),
	ci::Color(0.000000f, 0.411765f, 0.058824f),
	ci::Color(0.000000f, 0.400000f, 0.066667f),
	ci::Color(0.000000f, 0.394118f, 0.070588f),
	ci::Color(0.000000f, 0.376471f, 0.082353f),
	ci::Color(0.000000f, 0.370588f, 0.086275f),
	ci::Color(0.000000f, 0.352941f, 0.098039f),
	ci::Color(0.000000f, 0.347059f, 0.101961f),
	ci::Color(0.000000f, 0.329412f, 0.113725f),
	ci::Color(0.000000f, 0.323529f, 0.117647f),
	ci::Color(0.000000f, 0.305882f, 0.129412f),
	ci::Color(0.000000f, 0.294118f, 0.137255f),
	ci::Color(0.000000f, 0.288235f, 0.141176f),
	ci::Color(0.000000f, 0.270588f, 0.152941f),
	ci::Color(0.000000f, 0.258824f, 0.160784f),
	ci::Color(0.000000f, 0.247059f, 0.168627f),
	ci::Color(0.000000f, 0.241176f, 0.172549f),
	ci::Color(0.000000f, 0.223529f, 0.184314f),
	ci::Color(0.000000f, 0.211765f, 0.192157f),
	ci::Color(0.000000f, 0.200000f, 0.200000f),
	ci::Color(0.000000f, 0.194118f, 0.203922f),
	ci::Color(0.000000f, 0.176471f, 0.215686f),
	ci::Color(0.000000f, 0.164706f, 0.223529f),
	ci::Color(0.000000f, 0.152941f, 0.231373f),
	ci::Color(0.000000f, 0.147059f, 0.235294f),
	ci::Color(0.000000f, 0.129412f, 0.247059f),
	ci::Color(0.000000f, 0.117647f, 0.254902f),
	ci::Color(0.000000f, 0.105882f, 0.262745f),
	ci::Color(0.000000f, 0.094118f, 0.270588f),
	ci::Color(0.000000f, 0.082353f, 0.278431f),
	ci::Color(0.000000f, 0.070588f, 0.286275f),
	ci::Color(0.000000f, 0.064706f, 0.290196f),
	ci::Color(0.000000f, 0.047059f, 0.301961f),
	ci::Color(0.000000f, 0.035294f, 0.309804f),
	ci::Color(0.000000f, 0.023529f, 0.317647f),
	ci::Color(0.000000f, 0.011765f, 0.325490f),
	ci::Color(0.000000f, 0.000000f, 0.333333f),
	ci::Color(0.000000f, 0.011765f, 0.341176f),
	ci::Color(0.000000f, 0.023529f, 0.349020f),
	ci::Color(0.000000f, 0.029412f, 0.352941f),
	ci::Color(0.000000f, 0.047059f, 0.364706f),
	ci::Color(0.000000f, 0.058824f, 0.372549f),
	ci::Color(0.000000f, 0.070588f, 0.380392f),
	ci::Color(0.000000f, 0.082353f, 0.388235f),
	ci::Color(0.000000f, 0.094118f, 0.396078f),
	ci::Color(0.000000f, 0.105882f, 0.403922f),
	ci::Color(0.000000f, 0.117647f, 0.411765f),
	ci::Color(0.000000f, 0.123529f, 0.415686f),
	ci::Color(0.000000f, 0.141176f, 0.427451f),
	ci::Color(0.000000f, 0.152941f, 0.435294f),
	ci::Color(0.000000f, 0.164706f, 0.443137f),
	ci::Color(0.000000f, 0.176471f, 0.450980f),
	ci::Color(0.000000f, 0.188235f, 0.458824f),
	ci::Color(0.000000f, 0.200000f, 0.466667f),
	ci::Color(0.000000f, 0.211765f, 0.474510f),
	ci::Color(0.000000f, 0.217647f, 0.478431f),
	ci::Color(0.000000f, 0.235294f, 0.490196f),
	ci::Color(0.000000f, 0.247059f, 0.498039f),
	ci::Color(0.000000f, 0.258824f, 0.505882f),
	ci::Color(0.000000f, 0.270588f, 0.513725f),
	ci::Color(0.000000f, 0.282353f, 0.521569f),
	ci::Color(0.000000f, 0.294118f, 0.529412f),
	ci::Color(0.000000f, 0.305882f, 0.537255f),
	ci::Color(0.000000f, 0.317647f, 0.545098f),
	ci::Color(0.000000f, 0.329412f, 0.552941f),
	ci::Color(0.000000f, 0.341176f, 0.560784f),
	ci::Color(0.000000f, 0.352941f, 0.568627f),
	ci::Color(0.000000f, 0.364706f, 0.576471f),
	ci::Color(0.000000f, 0.376471f, 0.584314f),
	ci::Color(0.000000f, 0.382353f, 0.588235f),
	ci::Color(0.000000f, 0.400000f, 0.600000f),
	ci::Color(0.000000f, 0.411765f, 0.607843f),
	ci::Color(0.000000f, 0.423529f, 0.615686f),
	ci::Color(0.000000f, 0.435294f, 0.623529f),
	ci::Color(0.000000f, 0.447059f, 0.631373f),
	ci::Color(0.000000f, 0.458824f, 0.639216f),
	ci::Color(0.000000f, 0.470588f, 0.647059f),
	ci::Color(0.000000f, 0.482353f, 0.654902f),
	ci::Color(0.000000f, 0.494118f, 0.662745f),
	ci::Color(0.011765f, 0.505882f, 0.670588f),
	ci::Color(0.035294f, 0.517647f, 0.678431f),
	ci::Color(0.058824f, 0.529412f, 0.686275f),
	ci::Color(0.082353f, 0.541176f, 0.694118f),
	ci::Color(0.105882f, 0.552941f, 0.701961f),
	ci::Color(0.129412f, 0.564706f, 0.709804f),
	ci::Color(0.141176f, 0.570588f, 0.713725f),
	ci::Color(0.176471f, 0.588235f, 0.725490f),
	ci::Color(0.200000f, 0.600000f, 0.733333f),
	ci::Color(0.223529f, 0.611765f, 0.741176f),
	ci::Color(0.247059f, 0.623529f, 0.749020f),
	ci::Color(0.270588f, 0.635294f, 0.756863f),
	ci::Color(0.294118f, 0.647059f, 0.764706f),
	ci::Color(0.317647f, 0.658824f, 0.772549f),
	ci::Color(0.341176f, 0.670588f, 0.780392f),
	ci::Color(0.364706f, 0.682353f, 0.788235f),
	ci::Color(0.388235f, 0.694118f, 0.796078f),
	ci::Color(0.411765f, 0.705882f, 0.803922f),
	ci::Color(0.435294f, 0.717647f, 0.811765f),
	ci::Color(0.458824f, 0.729412f, 0.819608f),
	ci::Color(0.482353f, 0.741176f, 0.827451f),
	ci::Color(0.505882f, 0.752941f, 0.835294f),
	ci::Color(0.517647f, 0.758824f, 0.839216f),
	ci::Color(0.552941f, 0.776471f, 0.850980f),
	ci::Color(0.576471f, 0.788235f, 0.858824f),
	ci::Color(0.600000f, 0.800000f, 0.866667f),
	ci::Color(0.623529f, 0.811765f, 0.874510f),
	ci::Color(0.647059f, 0.823529f, 0.882353f),
	ci::Color(0.670588f, 0.835294f, 0.890196f),
	ci::Color(0.694118f, 0.847059f, 0.898039f),
	ci::Color(0.717647f, 0.858824f, 0.905882f),
	ci::Color(0.741176f, 0.870588f, 0.913725f),
	ci::Color(0.764706f, 0.882353f, 0.921569f),
	ci::Color(0.788235f, 0.894118f, 0.929412f),
	ci::Color(0.811765f, 0.905882f, 0.937255f),
	ci::Color(0.835294f, 0.917647f, 0.945098f),
	ci::Color(0.858824f, 0.929412f, 0.952941f),
	ci::Color(0.882353f, 0.941176f, 0.960784f),
	ci::Color(0.894118f, 0.947059f, 0.964706f),
	ci::Color(0.929412f, 0.964706f, 0.976471f),
	ci::Color(0.952941f, 0.976471f, 0.984314f),
	ci::Color(0.976471f, 0.988235f, 0.992157f),
	ci::Color(1.000000f, 1.000000f, 1.000000f)
}};

//! \see http://www.ncl.ucar.edu/Document/Graphics/ColorTables/MPL_winter.shtml
const std::array<const ci::Color, 128> MPLWinter::palette{{
	ci::Color(0.000000f, 0.003922f, 0.998039f),
	ci::Color(0.000000f, 0.011765f, 0.994118f),
	ci::Color(0.000000f, 0.019608f, 0.990196f),
	ci::Color(0.000000f, 0.027451f, 0.986275f),
	ci::Color(0.000000f, 0.035294f, 0.982353f),
	ci::Color(0.000000f, 0.043137f, 0.978431f),
	ci::Color(0.000000f, 0.050980f, 0.974510f),
	ci::Color(0.000000f, 0.058824f, 0.970588f),
	ci::Color(0.000000f, 0.066667f, 0.966667f),
	ci::Color(0.000000f, 0.070588f, 0.964706f),
	ci::Color(0.000000f, 0.082353f, 0.958824f),
	ci::Color(0.000000f, 0.086275f, 0.956863f),
	ci::Color(0.000000f, 0.098039f, 0.950980f),
	ci::Color(0.000000f, 0.101961f, 0.949020f),
	ci::Color(0.000000f, 0.113725f, 0.943137f),
	ci::Color(0.000000f, 0.117647f, 0.941176f),
	ci::Color(0.000000f, 0.129412f, 0.935294f),
	ci::Color(0.000000f, 0.137255f, 0.931373f),
	ci::Color(0.000000f, 0.141176f, 0.929412f),
	ci::Color(0.000000f, 0.152941f, 0.923529f),
	ci::Color(0.000000f, 0.160784f, 0.919608f),
	ci::Color(0.000000f, 0.168627f, 0.915686f),
	ci::Color(0.000000f, 0.172549f, 0.913725f),
	ci::Color(0.000000f, 0.184314f, 0.907843f),
	ci::Color(0.000000f, 0.192157f, 0.903922f),
	ci::Color(0.000000f, 0.200000f, 0.900000f),
	ci::Color(0.000000f, 0.203922f, 0.898039f),
	ci::Color(0.000000f, 0.215686f, 0.892157f),
	ci::Color(0.000000f, 0.223529f, 0.888235f),
	ci::Color(0.000000f, 0.231373f, 0.884314f),
	ci::Color(0.000000f, 0.235294f, 0.882353f),
	ci::Color(0.000000f, 0.247059f, 0.876471f),
	ci::Color(0.000000f, 0.254902f, 0.872549f),
	ci::Color(0.000000f, 0.262745f, 0.868627f),
	ci::Color(0.000000f, 0.270588f, 0.864706f),
	ci::Color(0.000000f, 0.278431f, 0.860784f),
	ci::Color(0.000000f, 0.286275f, 0.856863f),
	ci::Color(0.000000f, 0.290196f, 0.854902f),
	ci::Color(0.000000f, 0.301961f, 0.849020f),
	ci::Color(0.000000f, 0.309804f, 0.845098f),
	ci::Color(0.000000f, 0.317647f, 0.841176f),
	ci::Color(0.000000f, 0.325490f, 0.837255f),
	ci::Color(0.000000f, 0.333333f, 0.833333f),
	ci::Color(0.000000f, 0.341176f, 0.829412f),
	ci::Color(0.000000f, 0.349020f, 0.825490f),
	ci::Color(0.000000f, 0.352941f, 0.823529f),
	ci::Color(0.000000f, 0.364706f, 0.817647f),
	ci::Color(0.000000f, 0.372549f, 0.813725f),
	ci::Color(0.000000f, 0.380392f, 0.809804f),
	ci::Color(0.000000f, 0.388235f, 0.805882f),
	ci::Color(0.000000f, 0.396078f, 0.801961f),
	ci::Color(0.000000f, 0.403922f, 0.798039f),
	ci::Color(0.000000f, 0.411765f, 0.794118f),
	ci::Color(0.000000f, 0.415686f, 0.792157f),
	ci::Color(0.000000f, 0.427451f, 0.786275f),
	ci::Color(0.000000f, 0.435294f, 0.782353f),
	ci::Color(0.000000f, 0.443137f, 0.778431f),
	ci::Color(0.000000f, 0.450980f, 0.774510f),
	ci::Color(0.000000f, 0.458824f, 0.770588f),
	ci::Color(0.000000f, 0.466667f, 0.766667f),
	ci::Color(0.000000f, 0.474510f, 0.762745f),
	ci::Color(0.000000f, 0.478431f, 0.760784f),
	ci::Color(0.000000f, 0.490196f, 0.754902f),
	ci::Color(0.000000f, 0.498039f, 0.750980f),
	ci::Color(0.000000f, 0.505882f, 0.747059f),
	ci::Color(0.000000f, 0.513725f, 0.743137f),
	ci::Color(0.000000f, 0.521569f, 0.739216f),
	ci::Color(0.000000f, 0.529412f, 0.735294f),
	ci::Color(0.000000f, 0.537255f, 0.731373f),
	ci::Color(0.000000f, 0.545098f, 0.727451f),
	ci::Color(0.000000f, 0.552941f, 0.723529f),
	ci::Color(0.000000f, 0.560784f, 0.719608f),
	ci::Color(0.000000f, 0.568627f, 0.715686f),
	ci::Color(0.000000f, 0.576471f, 0.711765f),
	ci::Color(0.000000f, 0.584314f, 0.707843f),
	ci::Color(0.000000f, 0.588235f, 0.705882f),
	ci::Color(0.000000f, 0.600000f, 0.700000f),
	ci::Color(0.000000f, 0.607843f, 0.696078f),
	ci::Color(0.000000f, 0.615686f, 0.692157f),
	ci::Color(0.000000f, 0.623529f, 0.688235f),
	ci::Color(0.000000f, 0.631373f, 0.684314f),
	ci::Color(0.000000f, 0.639216f, 0.680392f),
	ci::Color(0.000000f, 0.647059f, 0.676471f),
	ci::Color(0.000000f, 0.654902f, 0.672549f),
	ci::Color(0.000000f, 0.662745f, 0.668627f),
	ci::Color(0.000000f, 0.670588f, 0.664706f),
	ci::Color(0.000000f, 0.678431f, 0.660784f),
	ci::Color(0.000000f, 0.686275f, 0.656863f),
	ci::Color(0.000000f, 0.694118f, 0.652941f),
	ci::Color(0.000000f, 0.701961f, 0.649020f),
	ci::Color(0.000000f, 0.709804f, 0.645098f),
	ci::Color(0.000000f, 0.713725f, 0.643137f),
	ci::Color(0.000000f, 0.725490f, 0.637255f),
	ci::Color(0.000000f, 0.733333f, 0.633333f),
	ci::Color(0.000000f, 0.741176f, 0.629412f),
	ci::Color(0.000000f, 0.749020f, 0.625490f),
	ci::Color(0.000000f, 0.756863f, 0.621569f),
	ci::Color(0.000000f, 0.764706f, 0.617647f),
	ci::Color(0.000000f, 0.772549f, 0.613725f),
	ci::Color(0.000000f, 0.780392f, 0.609804f),
	ci::Color(0.000000f, 0.788235f, 0.605882f),
	ci::Color(0.000000f, 0.796078f, 0.601961f),
	ci::Color(0.000000f, 0.803922f, 0.598039f),
	ci::Color(0.000000f, 0.811765f, 0.594118f),
	ci::Color(0.000000f, 0.819608f, 0.590196f),
	ci::Color(0.000000f, 0.827451f, 0.586275f),
	ci::Color(0.000000f, 0.835294f, 0.582353f),
	ci::Color(0.000000f, 0.839216f, 0.580392f),
	ci::Color(0.000000f, 0.850980f, 0.574510f),
	ci::Color(0.000000f, 0.858824f, 0.570588f),
	ci::Color(0.000000f, 0.866667f, 0.566667f),
	ci::Color(0.000000f, 0.874510f, 0.562745f),
	ci::Color(0.000000f, 0.882353f, 0.558824f),
	ci::Color(0.000000f, 0.890196f, 0.554902f),
	ci::Color(0.000000f, 0.898039f, 0.550980f),
	ci::Color(0.000000f, 0.905882f, 0.547059f),
	ci::Color(0.000000f, 0.913725f, 0.543137f),
	ci::Color(0.000000f, 0.921569f, 0.539216f),
	ci::Color(0.000000f, 0.929412f, 0.535294f),
	ci::Color(0.000000f, 0.937255f, 0.531373f),
	ci::Color(0.000000f, 0.945098f, 0.527451f),
	ci::Color(0.000000f, 0.952941f, 0.523529f),
	ci::Color(0.000000f, 0.960784f, 0.519608f),
	ci::Color(0.000000f, 0.964706f, 0.517647f),
	ci::Color(0.000000f, 0.976471f, 0.511765f),
	ci::Color(0.000000f, 0.984314f, 0.507843f),
	ci::Color(0.000000f, 0.992157f, 0.503922f),
	ci::Color(0.000000f, 1.000000f, 0.500000f)
}};

}} //!cieq::pallete